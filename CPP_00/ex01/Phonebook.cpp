/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:18:23 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/23 14:41:48 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	PhoneBook::add_contact() {
	Contact contact;
	std::cout << "Creating a new contact, fill the infomations .." << std::endl;
	
	contact.fill(rear);

	std::cout << "The contact is added to the phonebook" << std::endl;
	contacts[rear] = contact;
	rear = (rear + 1) % 8;
	if (size < 8)
		size++;
}


void	PhoneBook::get_contact_line() {
	int	input = -1;
	do
	{
		std::cout << "Choose an index to print all informations : ";
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Enter a valid number please !" << std::endl;
			continue ;
		}
		std::cin.ignore(1, '\n');
		if (input < size && input >= 0)
			break ;
		std::cout << "Index is not in the phonebook .." << std::endl;
	} while (1);
	std::cout << " ~~~~~~~~~~~~~~~~~~~ " << std::endl;
	std::cout << "First name : " << contacts[input].get_first_name() << std::endl;
	std::cout << "Last name : " << contacts[input].get_last_name() << std::endl;
	std::cout << "Nickname : " << contacts[input].get_nickname() << std::endl;
	std::cout << "Phone number : " << contacts[input].get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << contacts[input].get_dark_secret() << std::endl;
	std::cout << " ~~~~~~~~~~~~~~~~~~~ " << std::endl;
	std::cout.clear();
}

void	PhoneBook::search() {
	Contact	actu;
	if (size == 0)
	{
		std::cout << "The phonebook is empty, use ADD to fill it .." << std::endl;
		return ;
	}
	std::cout << std::string(45, '-') << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
	for (int i = 0; i < size; i++)
	{
		actu = contacts[i];
		std::cout << "|";
		std::cout << std::setfill(' ') << std::setw(10) << i;
		actu.print(actu.get_first_name());
		actu.print(actu.get_last_name());
		actu.print(actu.get_nickname());
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << std::string(45, '-') << std::endl;
	get_contact_line();
}
