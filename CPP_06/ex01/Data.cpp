/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:24:04 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/02 17:33:10 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("ga"), _age(23) {}

std::string  Data::getName() const {return _name;}

int     Data::getAge() const {return _age;}

void    Data::setAge(int const age) {this->_age = age;}

void    Data::setName(char const *name) {this->_name = name;}