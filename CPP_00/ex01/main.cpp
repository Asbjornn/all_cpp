/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:03:32 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/23 14:41:02 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void) {
	PhoneBook phonebook;
	std::string	input;
	
	std::cout << "Welcome to the phonebook ..." << std::endl;
	do
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, input);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "It failed ..." << std::endl;
		}
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input != "EXIT")
			std::cout << "You can only use ADD, SEARCH and EXIT" << std::endl;
	} while (input != "EXIT");
	
	std::cout << "Phonebook is now close ..." << std::endl;
	return (0);
}
