/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:27 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 11:37:30 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    std::cout << "=== Creaction of Bureaucrat and Form ===" << std::endl;
	Bureaucrat Robert("Robert", 3);
	Bureaucrat Flo("Flo", 43);
	Bureaucrat Remi("Remi", 122);
	ShrubberyCreationForm shrub("Plob");
	RobotomyRequestForm robo("Robot");
	PresidentialPardonForm trum("Trump");
    try
    {
		std::cout << "\n=== Bureaucrat try to execute Form ===" << std::endl;
        std::cout << shrub << std::endl;
        std::cout << robo << std::endl;
        std::cout << trum << std::endl << std::endl;
		Robert.executeForm(shrub);
		Flo.executeForm(robo);
		Remi.executeForm(trum);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
		std::cout << "=== Bureaucrat sign Form ===" << std::endl;
		Robert.signForm(trum);
		Flo.signForm(robo);
		Remi.signForm(shrub);
		std::cout << std::endl << shrub << std::endl;
        std::cout << robo << std::endl;
        std::cout << trum << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << std::endl;
    try
    {
		std::cout << "=== Bureaucrat try to execute Form with lowed grade ===" << std::endl;
		Remi.executeForm(robo);
		Flo.executeForm(trum);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
		std::cout << "=== Bureaucrat execute Form with good grade ===" << std::endl;
		Remi.executeForm(shrub);
		std::cout << std::endl;
		Flo.executeForm(robo);
		std::cout << std::endl;
		Robert.executeForm(trum);
		std::cout << std::endl;
		std::cout << shrub << std::endl;
        std::cout << robo << std::endl;
        std::cout << trum << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << std::endl;
	std::cout << "=== All destructors ===" << std::endl;
    return 0;
}
