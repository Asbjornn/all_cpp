/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:53:29 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 15:22:38 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
    // std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
    // std::cout << "AMateria copy constructor called" << std::endl;
    this->_type = copy._type;
}

AMateria& AMateria::operator=(const AMateria& other) {
    // std::cout << "AMateria copy assignment constructor called" << std::endl;
    this->_type = other._type;
    return *this;
}

AMateria::~AMateria() {
    // std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::GetType() const {
    return this->_type;
}

void    AMateria::use(ICharacter& target) {
    (void)target;
}