/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:04:01 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/28 17:25:08 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria(type) {
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
    std::cout << "Cure copy constructor called" << std::endl;
    this->_type = copy._type;
}

Cure& Cure::operator=(const Cure& other) {
    std::cout << "Cure copy assignment constructor called" << std::endl;
    this->_type = other._type;
    return *this;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const {
    Cure* i = new Cure(this->_type);
    return i;
}

void    Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}