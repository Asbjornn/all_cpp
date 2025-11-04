/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:39:55 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 16:19:59 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) {
    std::cout << "Character " << this->getName() << " is created" << std::endl;
	for (size_t i = 0; i < 4; i++)
		materias[i] = 0;
	
}

Character::Character(const Character& copy) : ICharacter(copy) {
    std::cout << "Character copy constructor called" << std::endl;
    this->_name = copy._name;
	for (size_t i = 0; i < 4; i++)
	{
		if (copy.materias[i])
			materias[i] = copy.materias[i]->clone();
		else
			materias[i] = 0;
	}
}

Character& Character::operator=(const Character& other) {
    std::cout << "Character copy assignment constructor called" << std::endl;
    this->_name = other._name;
		for (size_t i = 0; i < 4; i++)
	{
		if (other.materias[i])
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = 0;
	}
	
    return *this;
}

Character::~Character() {
    std::cout << "Character " << this->getName() << " is destroyed" << std::endl;
}

std::string const & Character::getName() const {
    return (this->_name);
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (!this->materias[i])
        {
            this->materias[i] = m;
			std::cout << this->getName() << " equiped materia : " << m->GetType() << std::endl;
            return ;
        }
    }
    std::cout << "Already reached 4 materias in inventory" << std::endl;
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
	{
		std::cout << "Index is out of bond" << std::endl;
		return ;
	}
	if (!this->materias[idx])
	{
		std::cout << "No materia at this index"<< std::endl;
		return ;
	}
	std::cout << this->getName() << " unequiped materia " << materias[idx]->GetType() << " at index " << idx << std::endl;
    this->materias[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0)
	{
		std::cout << "Index is out of bond" << std::endl;
		return ;
	}
	if (!this->materias[idx])
	{
		std::cout << "No materia at this index" << std::endl;
		return ;
	}
    this->materias[idx]->use(target);
}
