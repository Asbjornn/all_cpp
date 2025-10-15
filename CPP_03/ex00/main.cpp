/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 13:46:33 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void)
{
	ClapTrap bob("Bob");
	ClapTrap CPX30("CPX30EF");
	
	bob.attack("Brouette");
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
	for (int i = 0; i < 10; i++)
		CPX30.beRepaired(1);
	CPX30.attack("Bob");
	CPX30.beRepaired(5);
	CPX30.takeDamage(10);
	
	return (0);
}