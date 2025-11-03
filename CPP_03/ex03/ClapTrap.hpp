/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:49 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 11:14:23 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"

class ClapTrap {
	public:
		ClapTrap (std::string name);
		ClapTrap (const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap ();
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	protected:
		std::string	name;
		int	hit_point;
		int energy_point;
		int	attack_damage;
};

// COLORS
#define RESET       "\033[0m"
#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[38;2;255;255;0m"
#define BLUE        "\033[0;34m"
#define ORANGE		"\033[38;2;255;128;0m"
#define BWHITE      "\033[1;37m"

#endif