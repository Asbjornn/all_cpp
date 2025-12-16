/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverters.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:28:20 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 09:50:03 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	(void)copy;
};

ScalarConverter&    ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
};

ScalarConverter::~ScalarConverter() {};

static void printChar(double value) {
	if (std::isnan(value) || value < 0 || value > 127)
		std::cout << "Char: impossible" << std::endl;
	else if (!std::isprint(value))
		std::cout << "Char: non displayable" << std::endl;
	else
		std::cout << "Char: '" << static_cast<char>(value) << "'\n";
}

static void printInt(double value) {
	if (std::isnan(value) || value < INT_MIN || value > INT_MAX)
		std::cout << "Int: impossible" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(value) << std::endl;
}

static void printFloat(double value) {
	if (std::isnan(value))
		std::cout << "Float: nanf" << std::endl;
	else if (std::isinf(value))
	{
		if (value < 0)
			std::cout << "Float: -inff" << std::endl;
		else
			std::cout << "Float: inff" << std::endl;
	}
	else
		std::cout << std::fixed << std::setprecision(1) << "Float: " << static_cast<float>(value) << "f" << std::endl;
}

static void printDouble(double value) {
	if (std::isnan(value))
		std::cout << "Double: nan" << std::endl;
	else if (std::isinf(value))
		std::cout << "Double: " << value << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "Double: " << value << std::endl;
}

static bool	isvalid(std::string input) {
	if (input[0] == '.' && input.size() > 1)
		return false;
	if (std::count(input.begin(), input.end(), '.') > 1)
		return false;
	if (std::count(input.begin(), input.end(), 'f') > 1)
		return false;
	return true;
}

static void	printImpossible(void) {
	std::cout << "Char: impossible" << std::endl;
	std::cout << "Int: impossible" << std::endl;
	std::cout << "Float: impossible" << std::endl;
	std::cout << "Double: impossible" << std::endl;
}

// cast in c++
// static_cast<type>();

void    ScalarConverter::convert(const std::string& input) {
	double value;

	if (input.empty())
		std::cout << "No input" << std::endl;
	else if (!isvalid(input))
	{
		printImpossible();
		return ;
	}
	else {
		try
		{
			if (input.length() == 1 && !std::isdigit(input[0]))
				value = static_cast<double>(input[0]);
			else
				value = std::stod(input);
		}
		catch(...)
		{
			printImpossible();
			return ;
		}
		
		printChar(value);
		printInt(value);
		printFloat(value);
		printDouble(value);
	}
}
