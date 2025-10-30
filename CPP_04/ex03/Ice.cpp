/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:02:49 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/28 17:25:24 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria(type) {
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
    std::cout << "Ice copy constructor called" << std::endl;
    this->_type = copy._type;
}

Ice& Ice::operator=(const Ice& other) {
    std::cout << "Ice copy assignment constructor called" << std::endl;
    this->_type = other._type;
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const {
    Ice* i = new Ice(this->_type);
    return i;
}

void    Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}