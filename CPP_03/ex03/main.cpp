/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 15:35:27 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main (void)
{
	std::cout << BWHITE << "=== Création de DiamondTrap 'Dio' ===" << RESET << std::endl;
    DiamondTrap diamond("Dio");

    std::cout << BWHITE << "\n=== Test des attaques (ScavTrap version) ===" << RESET << std::endl;
    diamond.attack("Jojo");

    std::cout << BWHITE << "\n=== Test des dégâts et réparation (ClapTrap) ===" << RESET << std::endl;
    diamond.takeDamage(10);
    diamond.beRepaired(20);
    diamond.takeDamage(15);

    std::cout << BWHITE << "\n=== Test des capacités spécifiques ===" << RESET << std::endl;
    diamond.guardGate();
    diamond.highFivesGuys();

    std::cout << BWHITE << "\n=== Test whoAmI() (DiamondTrap spécifique) ===" << RESET << std::endl;
    diamond.whoAmI();

    std::cout << BWHITE << "\n=== Fin du programme ===" << RESET << std::endl;
    return 0;
}