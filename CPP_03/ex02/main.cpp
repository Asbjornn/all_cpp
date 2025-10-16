/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 15:35:40 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main (void)
{
	std::cout << BWHITE << "=== Création de FragTrap 'Happy' ===" << RESET << std::endl;
	FragTrap high_fives("Happy");

    std::cout << BWHITE << "\n=== Test des attaques (ClapTrap version) ===" << RESET << std::endl;
	high_fives.attack("Wall");

    std::cout << BWHITE << "\n=== Test des dégâts et réparation (ClapTrap) ===" << RESET << std::endl;
    high_fives.takeDamage(10);
    high_fives.beRepaired(20);
    high_fives.takeDamage(10);

    std::cout << BWHITE << "\n=== Test des capacités spécifiques ===" << RESET << std::endl;
    high_fives.highFivesGuys();

    std::cout << BWHITE << "\n=== Fin du programme ===" << RESET << std::endl;
    return 0;
}