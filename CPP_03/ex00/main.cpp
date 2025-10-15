/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 12:31:39 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void)
{
	ClapTrap bob("Bob");
	
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
	
	return (0);
}