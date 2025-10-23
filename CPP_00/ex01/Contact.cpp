/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:55:45 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/23 12:02:09 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name() {
	return first_name;
}

std::string Contact::get_last_name() {
	return last_name;
}

std::string Contact::get_nickname() {
	return nickname;
}

std::string Contact::get_phone_number() {
	return phone_number;
}

std::string Contact::get_dark_secret() {
	return dark_secret;
}

int 		Contact::get_index() {
	return index;
}

void	Contact::print(std::string s) {
	unsigned long size = s.length();
	std::cout << "|";
	if (size > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << s[i];
		std::cout << ".";
	}
	else
		std::cout << std::setfill(' ') << std::setw(10) << s;
}

void	Contact::fill(int id) {
	do
	{
		std::cout << "First name : ";
		std::getline(std::cin, first_name);
	} while (first_name.empty() || first_name.front() == ' ');

	do
	{
		std::cout << "Last name : ";
		std::getline(std::cin, last_name);
	} while (last_name.empty() || last_name.front() == ' ');
	

	do
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
	} while (nickname.empty() || nickname.front() == ' ');
	

	int	valid = 0;
	int	i;
	std::string	input;
	do
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, input);
		for (i = 0; input[i]; i++)
		{
			if (!isdigit(input[i]))
			{
				std::cout << "A number can only contain numbers .." << std::endl;
				break ;
			}
			if (i > 10)
				break ;
		}
		if (input.size() != 10)
			std::cout << "A number contain 10 numbers .." << std::endl;
		else if (input[i] == '\0')
			valid = 1;
	} while (!valid);
	phone_number = input;

	do
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin, dark_secret);
	} while (dark_secret.empty() || dark_secret.front() == ' ');

	index = id;
}
