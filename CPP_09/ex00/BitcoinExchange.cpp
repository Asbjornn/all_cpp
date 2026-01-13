/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:22:39 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/13 10:50:28 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// --- Constructors & Destructors ---

Btc::Btc() {
	std::ifstream   in("data.csv");
	std::string     line;
	bool			first_line = true;
	
	if (!in.is_open())
		throw std::runtime_error("data.csv failed to open");
	while (std::getline(in, line))
	{
		std::stringstream	ss(line);
		std::string			date;
		std::string			s_value;
		
		if (first_line)
		{
			// verification for the first line with the type
			first_line = false;
			continue ;
		}
		
		std::getline(ss, date, ',');
		std::getline(ss, s_value);

		try
		{
			float value = std::stof(s_value);
			data.insert(std::make_pair(date, value));
		}
		catch(...)
		{
			std::string error =  "Invalid value: " + s_value;
			throw std::runtime_error(error);
		}
	}
	in.close();
}

Btc::Btc(const Btc& copy) {
	this->data = copy.data;
}

Btc& Btc::operator=(const Btc& other) {
	if (this != &other)
	{
		this->data = other.data;
	}
	return *this;
}

Btc::~Btc() {}


// --- Functions ---

const std::map<std::string, float>& Btc::get_data() const {
	return this->data;
}

float Btc::find_date(std::string date) {
	float last_value = 0;
	for (std::map<std::string, float>::const_iterator it = get_data().begin(); it != get_data().end(); it++)
	{
		if (it->first == date)
			return it->second;
		else if (it->first > date)
			return last_value;
		last_value = it->second;
	}
	return last_value;
}

static bool	is_bissextile(int year) {
	if (year % 400 == 0)
			return true;
	else if (year % 100 == 0)
		return false;
	else if (year % 4 == 0)
		return true;
	return false;
}

static int max_day(int year, int month) {
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			if (is_bissextile(year))
				return 29;
			else
				return 28;
	}
	return 0;
}

static int	verif_date(std::string date) {
	if (date[4] != '-' || date[7] != '-')
		return 0;
	
	try
	{
		int year = std::stoi(date.substr(0, 4));
		int month = std::stoi(date.substr(5, 2));
		int day = std::stoi(date.substr(8, 2));
		
		if (date < "2009-01-02") // first date of data.csv
			return 0;
		else if (month < 1 || month > 12)
			return 0;
		else if (day < 1 || day > max_day(year, month))
			return 0;
	}
	catch(...)
	{
		return 0;
	}
	
	return 1;
}

static int	verif_value(float value) {
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return 0;
	}
	else if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return 0;
	}
	return 1;
}

void	Btc::use_input(std::ifstream& in) {
	std::string line;
	bool		first_line = true;

	while (std::getline(in, line)) {
		if (first_line)
		{
			if (line != "date | value") {
				std::cerr << "Error: expect format 'date | value' first line" << std::endl;
				return ;
			}
			first_line = false;
			continue ;
		}
		
		std::stringstream	ss(line);
		std::string			date;
		std::string			s_value;
		float				value;

		std::getline(ss, date, '|');
		if (date.c_str()[date.length() - 1] == ' ')
			date.erase(date.end() - 1);
		if (!verif_date(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue ;
		}
		
		std::getline(ss, s_value);
		try
		{
			value = std::stof(s_value);
			if (!verif_value(value))
				continue ;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: not a number." << std::endl;
			continue ;
		}

		std::cout << date << " => " << value << " = " << value * find_date(date) << std::endl;
	}
}