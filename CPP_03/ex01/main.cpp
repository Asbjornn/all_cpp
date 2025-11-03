/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 11:06:15 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main (void)
{
	std::cout << BWHITE << "=== Création de ScavTrap 'Marguerite' ===" << RESET << std::endl;
	ScavTrap flower("Marguerite");
	
    std::cout << std::endl << BWHITE << "=== Test des attaques (ScavTrap version) ===" << RESET << std::endl;
	flower.attack("Capitol");

    std::cout << std::endl << BWHITE << "=== Test des dégâts et réparation (ClapTrap) ===" << RESET << std::endl;
    flower.takeDamage(10);
    flower.beRepaired(20);
    flower.takeDamage(10);

    std::cout << std::endl << BWHITE << "=== Test des capacités spécifiques ===" << RESET << std::endl;
    flower.guardGate();

	std::cout << std::endl << BWHITE << "=== Test avec 0 hit points ===" << RESET << std::endl;
	for (size_t i = 0; i < 5; i++)
		flower.takeDamage(20);
	flower.attack("White House");
	flower.guardGate();
	
    std::cout << std::endl << BWHITE << "=== Fin du programme ===" << RESET << std::endl;
    return 0;
}