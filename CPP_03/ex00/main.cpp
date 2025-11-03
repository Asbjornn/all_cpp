/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 10:45:13 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void)
{
	std::cout << BWHITE << "=== Création de ClapTrap 'Bob' ===" << RESET << std::endl;
	ClapTrap bob("Bob");
	std::cout << BWHITE << "=== Création de ClapTrap 'CPX30EF' ===" << RESET << std::endl;
	ClapTrap CPX30("CPX30EF");
	
	std::cout << std::endl << BWHITE << "=== Test avec Bob ===" << RESET << std::endl;
	bob.attack("Washing machine");
	bob.takeDamage(2);
	bob.beRepaired(3);
	
	for (int i = 0; i < 5; i++)
		bob.takeDamage(2);
	bob.beRepaired(1);
	bob.takeDamage(2);
	
	bob.attack("Table");
	bob.beRepaired(5);
	bob.takeDamage(5);

	std::cout << std::endl << std::endl;
	std::cout << BWHITE << "=== Test avec CPX30EF ===" << RESET << std::endl;
	for (int i = 0; i < 10; i++)
		CPX30.beRepaired(1);
	CPX30.attack("Bob");
	CPX30.beRepaired(5);
	CPX30.takeDamage(5);

    std::cout << std::endl << BWHITE << "=== Fin du programme ===" << RESET << std::endl;
    return 0;
}