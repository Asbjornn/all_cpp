/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:53:51 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 15:57:57 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "iostream"
#include "Colors.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap (std::string name) : ClapTrap(name) {
			std::cout << "ScavTrap constructor called" << std::endl;
			this->name = name;
			this->hit_point = 100;
			this->energy_point = 50;
			this->attack_damage = 20;
		}
		~ScavTrap ();
		void	attack(const std::string& target) override;
		void	guardGate ();
	
	private:
		std::string	name;
		int	hit_point;
		int energy_point;
		int	attack_damage;
};

#endif