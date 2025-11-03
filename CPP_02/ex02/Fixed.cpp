/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:12:14 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/30 13:59:51 by gcauchy          ###   ########.fr       */
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

// ~~~~~~~~~~~~~~~~~~~~~  Comparison operators  ~~~~~~~~~~~~~~~~~~~~~ //

bool Fixed::operator>(const Fixed& other) const {
	return this->number_value > other.number_value;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->number_value < other.number_value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->number_value <= other.number_value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->number_value >= other.number_value;
}

bool Fixed::operator==(const Fixed& other) const {
	return this->number_value == other.number_value;
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->number_value != other.number_value;
}

// ~~~~~~~~~~~~~~~~~~~~~  Arithmetic operators  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;
	result.number_value = this->number_value + other.number_value;
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;
	result.number_value = this->number_value - other.number_value;
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed result;
	result.number_value = this->number_value * other.number_value;
	result.number_value = result.number_value >> fractionnal;
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed result;
	result.number_value = (this->number_value << fractionnal) / other.number_value;
	return result;
}

// ~~~~~~~~~~~~~~~~~~~~~  Increpent and decrement operators  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed& Fixed::operator++() {
	++number_value;
	return *this;
}

Fixed& Fixed::operator--() {
	--number_value;
	return *this;	
}

Fixed Fixed::operator++(int) {
	Fixed result(*this);
	++(*this);
	return result;	
}

Fixed Fixed::operator--(int) {
	Fixed result(*this);
	--(*this);
	return result;
}

// ~~~~~~~~~~~~~~~~~~~~~  Functions  ~~~~~~~~~~~~~~~~~~~~~ //

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return number_value;
}

void    Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    number_value = raw;
}

int Fixed::toInt(void) const {
    return number_value >> fractionnal;
}

float Fixed::toFloat(void) const {
    return (float)number_value / (1 << fractionnal);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.number_value < b.number_value)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed&a, const Fixed& b) {
	if (a.number_value < b.number_value)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.number_value > b.number_value)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed&a, const Fixed& b) {
	if (a.number_value > b.number_value)
		return a;
	return b;
}

// ~~~~~~~~~~~~~~~~~~~~~  Destructor  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}