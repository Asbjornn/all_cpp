/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:48:00 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 14:09:14 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& copy) {
	std::cout << "Intern copy constructor called" << std::endl;
	(void)copy;
}

Intern&	Intern::operator=(const Intern& other) {
	std::cout << "Intern copy assignment constructor called" << std::endl;
	(void)other;
	return (*this);
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

AForm*	Intern::makeForm(std::string name, std::string target) {
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i;
	for (i = 0; i < 3; i++)
		if (name == forms[i])
			break ;
	
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return new ShrubberyCreationForm(target);

		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return new RobotomyRequestForm(target);
		
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return new PresidentialPardonForm(target);

		default:
			std::cout << "Intern cannot creates a random form named: " << name << std::endl;
			return nullptr;
	}
}
