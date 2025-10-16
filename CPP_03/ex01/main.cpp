/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 15:33:56 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main (void)
{
	std::cout << BWHITE << "=== Création de ScavTrap 'Marguerite' ===" << RESET << std::endl;
	ScavTrap flower("Marguerite");
	
    std::cout << BWHITE << "\n=== Test des attaques (ScavTrap version) ===" << RESET << std::endl;
	flower.attack("Capitol");

    std::cout << BWHITE << "\n=== Test des dégâts et réparation (ClapTrap) ===" << RESET << std::endl;
    flower.takeDamage(10);
    flower.beRepaired(20);
    flower.takeDamage(10);

    std::cout << BWHITE << "\n=== Test des capacités spécifiques ===" << RESET << std::endl;
    flower.guardGate();

    std::cout << BWHITE << "\n=== Fin du programme ===" << RESET << std::endl;
    return 0;
}