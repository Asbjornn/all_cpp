/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:32:42 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 14:02:36 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap constructor called" << std::endl;
	ClapTrap::name += "_clap_name";
	this->name = name;
	this->hit_point = FragTrap::default_hit_point;
	this->energy_point = ScavTrap::default_energy_point;
	this->attack_damage = FragTrap::default_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	ClapTrap::name = copy.name + "_clap_name";
	this->name = copy.name;
	this->hit_point = copy.default_hit_point;
	this->energy_point = copy.default_energy_point;
	this->attack_damage = copy.default_attack_damage;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy assignment called" << std::endl;
	ClapTrap::name = other.name + "_clap_name";
	this->name = other.name;
	this->hit_point = other.default_hit_point;
	this->energy_point = other.default_energy_point;
	this->attack_damage = other.default_attack_damage;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "My DiamondTrap name is: " << BLUE << this->name << RESET << std::endl;
	std::cout << "My ClapTrap name is: " << BLUE << this->ClapTrap::name << RESET << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}