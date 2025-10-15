/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:58 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 12:34:06 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = copy.name;
	this->hit_point = copy.hit_point;
	this->energy_point = copy.energy_point;
	this->attack_damage = copy.attack_damage;
}

ClapTrap::ClapTrap(std::string name, int hit_point, int energy_point, int attack) {
	this->name = name;
	this->hit_point = hit_point;
	this->energy_point = energy_point;
	this->attack_damage = attack;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;

	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->energy_point <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << this->name << " is out of energy!" << RESET << std::endl;
		std::cout << YELLOW << "Can not attack .." << RESET << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_point--;
	std::cout << "ClapTrap have " << this->energy_point << " energy point left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_point <= 0)
	{
		std::cout << RED << "ClapTrap " << this->name << " is already";
		std::cout << " dead " << RESET << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->name << " take " << amount << " damage ";
	this->hit_point -= amount;
	std::cout << "and now have " << this->hit_point << " hit point left" << std::endl;

	if (this->hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " have " << this->hit_point;
		std::cout << " and" << RED <<  " DIED " << RESET << "from his injuries" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy_point <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << this->name << " is out of energy!" << RESET << std::endl;
		std::cout << YELLOW << "Can not repair .." << RESET << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " repairs " << amount;
	std::cout << " hit points" << std::endl;
	this->hit_point += amount;
	this->energy_point--;
	std::cout << "ClapTrap have " << this->energy_point << " energy point left" << std::endl;
}