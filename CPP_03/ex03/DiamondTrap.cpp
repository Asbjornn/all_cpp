/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:32:42 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/05 01:06:20 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::name = "default_clap_name";
	this->name = "default";
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::default_energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = name;
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::default_energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = copy.name;
	ClapTrap::name = this->name + "_clap_name";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy assignment called" << std::endl;
	ClapTrap::operator=(other);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	
	this->name = other.name;
	ClapTrap::name = other.name + "_clap_name";

	return *this;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "My DiamondTrap name is: " << BLUE << this->name << RESET << std::endl;
	std::cout << "My ClapTrap name is: " << BLUE << this->ClapTrap::name << RESET << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}