/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:17:31 by gcauchy           #+#    #+#             */
/*   Updated: 2025/09/23 16:51:30 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed_point::fractionnal = 8;

Fixed_point::Fixed_point() {
    std::cout << "Default constructor called" << std::endl;
    number_value = 0;
}

Fixed_point::Fixed_point(const Fixed_point& copy) {
    std::cout << "Copy constructor called" << std::endl;
    number_value = copy.number_value;
}

Fixed_point& Fixed_point::operator=(const Fixed_point& other) {
    std::cout << "Copy assignment constructor called" << std::endl;
    number_value = other.number_value;

    return *this;
}

int    Fixed_point::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return number_value;
}

void    Fixed_point::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    number_value = raw;
}

Fixed_point::~Fixed_point() {
    std::cout << "Destructor called" << std::endl;
}