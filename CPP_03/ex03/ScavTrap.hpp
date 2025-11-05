/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:53:51 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/04 17:24:02 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "iostream"
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap ();
		
		void	attack(const std::string& target);		// override the attack() from ClapTrap
		void	guardGate ();
		
	protected:
		static const int	default_hit_points = 100;
		static const int	default_energy_points = 50;
		static const int	default_attack_damage = 20;
};

#endif