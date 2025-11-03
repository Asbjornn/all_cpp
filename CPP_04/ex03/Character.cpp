/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:39:55 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 10:18:37 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string& name) {
    std::cout << "Character constructor called" << std::endl;
    this->size = 0;
}

Character::Character(const Character& copy) : ICharacter(copy) {
    std::cout << "Character copy constructor called" << std::endl;
    this->name = copy.name;
    this->size = copy.size;
}

Character& Character::operator=(const Character& other) {
    std::cout << "Character copy assignment constructor called" << std::endl;
    this->name = other.name;
    this->size = other.size;
    return *this;
}

Character::~Character() {
    std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const {
    return (this->name);
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == nullptr)
        {
            this->materias[i] = m;
            this->size++;
            break ;
        }
    }
    
}

void Character::unequip(int idx) {
    this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    this->materias[idx]->use(target);
    this->materias[idx] = NULL;
}
