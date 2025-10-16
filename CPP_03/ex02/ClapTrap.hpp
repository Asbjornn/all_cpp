/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:49 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 10:50:57 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"
#include "Colors.hpp"

class ClapTrap {
	public:
		ClapTrap (std::string name);
		ClapTrap (const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap ();
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	protected:
		std::string	name;
		int	hit_point;
		int energy_point;
		int	attack_damage;
};

#endif