/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:05:38 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/04 14:40:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "default";
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap (std::string name) : ClapTrap (name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap (const FragTrap& copy) : ClapTrap (copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = copy.name;
	this->hit_point = copy.hit_point;
	this->energy_point = copy.energy_point;
	this->attack_damage = copy.attack_damage;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;

	return *this;
}

void	FragTrap::highFivesGuys (void) {
	if (this->hit_point <= 0)
	{
		std::cout << RED << "ScavTrap " << this->name << " is already";
		std::cout << " dead " << RESET << std::endl;
		return ;
	}
	std::cout << "FragTrap " << BLUE << this->name << RESET << " is asking gently for a high-fives !" << std::endl;
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap destructor called" << std::endl;
}