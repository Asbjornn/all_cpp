/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:53:51 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 13:59:49 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "iostream"
#include "Colors.hpp"
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	private:
		std::string	name;
		int	hit_point;
		int energy_point;
		int	attack_damage;
};

#endif