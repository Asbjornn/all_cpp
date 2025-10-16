/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:53:34 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 10:58:26 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->name = copy.name;
	this->hit_point = copy.hit_point;
	this->energy_point = copy.energy_point;
	this->attack_damage = copy.attack_damage;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->energy_point <= 0)
	{
		std::cout << ORANGE << "ScavTrap " << this->name << " is out of energy!" << RESET << std::endl;
		std::cout << ORANGE << "Can not attack .." << RESET << std::endl;
		return ;
	}
	if (this->hit_point <= 0)
	{
		std::cout << RED << "ScavTrap " << this->name << " is already";
		std::cout << " dead " << RESET << std::endl;
		return ;
	}
	
	std::cout << "ScavTrap " << BLUE << this->name << RESET << " attacks " << target;
	std::cout << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_point--;
	std::cout << "ScavTrap have " << YELLOW << this->energy_point << " energy point left" << RESET <<std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << BLUE << this->name << RESET <<" in now in ";
	std::cout << BWHITE << "Gate keeper mode" << RESET << std::endl;

}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

