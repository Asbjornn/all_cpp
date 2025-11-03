/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:17:31 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/30 14:00:27 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionnal = 8;

// ~~~~~~~~~~~~~~~~~~~~~  Constructor  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    number_value = 0;
}

Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    number_value = copy.number_value;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    number_value = value << fractionnal;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    number_value = roundf(value * (1 << fractionnal));
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment constructor called" << std::endl;
    number_value = other.number_value;

    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

// ~~~~~~~~~~~~~~~~~~~~~  Functions  ~~~~~~~~~~~~~~~~~~~~~ //

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return number_value;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    number_value = raw;
}

int Fixed::toInt(void) const {
    return number_value >> fractionnal;
}

float Fixed::toFloat(void) const {
    return (float)number_value / (1 << fractionnal);
}

// ~~~~~~~~~~~~~~~~~~~~~  Destructor  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}