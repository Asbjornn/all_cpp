/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:22:58 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/04 14:56:14 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap dafault constructor called" << std::endl;
	this->name = "default";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

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
	if (target.empty())
	{
		std::cout << RED << "ClapTrap cannot attack an invisible enemy" << RESET << std::endl;
		return ;
	}
	if (this->energy_point <= 0)
	{
		std::cout << ORANGE << "ClapTrap " << this->name << " is out of energy!" << RESET << std::endl;
		std::cout << ORANGE << "Can not attack .." << RESET << std::endl;
		return ;
	}
	if (this->hit_point <= 0)
	{
		std::cout << RED << "ClapTrap " << this->name << " is already";
		std::cout << " dead " << RESET << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << BLUE << this->name << RESET << " attacks " << target;
	std::cout << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_point--;
	std::cout << "ClapTrap have " << YELLOW << this->energy_point << " energy point left" << RESET <<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount < 0)
	{
		std::cout << RED << "ClapTrap cannot take negative damage" << RESET << std::endl;
		return ;
	}
	if (this->hit_point <= 0)
	{
		std::cout << RED << "ClapTrap " << this->name << " is already";
		std::cout << " dead " << RESET << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << BLUE << this->name << RESET << " take " << amount << " damage ";
	this->hit_point -= amount;
	std::cout << "and now have " << GREEN << this->hit_point << " hit point left" << RESET << std::endl;

	if (this->hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " have " << this->hit_point;
		std::cout << " hit point and" << RED <<  " DIES " << RESET << "from his injuries" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (amount < 0)
	{
		std::cout << RED << "ClapTrap cannot repair itself with a negative value" << RESET << std::endl;
		return ;
	}
	if (this->energy_point <= 0)
	{
		std::cout << ORANGE << "ClapTrap " << this->name << " is out of energy!" << RESET << std::endl;
		std::cout << ORANGE << "Can not repair .." << RESET << std::endl;
		return ;
	}
	if (this->hit_point <= 0)
	{
		std::cout << RED << "ClapTrap " << this->name << " is already";
		std::cout << " dead " << RESET << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << BLUE << this->name << RESET << " repairs " << amount;
	std::cout << " hit points" << std::endl;
	this->hit_point += amount;
	this->energy_point--;
	std::cout << "ClapTrap have " << YELLOW << this->energy_point <<" energy point left" << RESET << std::endl;
}
