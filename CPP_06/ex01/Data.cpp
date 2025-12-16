/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:24:04 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 10:08:43 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("default"), _age(42) {}

Data::Data(std::string name, int age) : _name(name), _age(age) {}

Data::Data(const Data& copy) : _name(copy.getName()), _age(copy.getAge()) {}

Data& Data::operator=(const Data& other) {
    if (this != &other)
    {
        this->_name = other.getName();
        this->_age = other.getAge();
    }
    return *this;
}

Data::~Data() {}

std::string  Data::getName() const {return _name;}

int     Data::getAge() const {return _age;}