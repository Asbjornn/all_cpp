/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:12:14 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 11:17:09 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed_point::fractionnal = 8;

// ~~~~~~~~~~~~~~~~~~~~~  Constructor  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed_point::Fixed_point() {
    // std::cout << "Default constructor called" << std::endl;
    number_value = 0;
}

Fixed_point::Fixed_point(const Fixed_point& copy) {
    // std::cout << "Copy constructor called" << std::endl;
    number_value = copy.number_value;
}

Fixed_point::Fixed_point(const int value) {
    // std::cout << "Int constructor called" << std::endl;
    number_value = value << fractionnal;
}

Fixed_point::Fixed_point(const float value) {
    // std::cout << "Float constructor called" << std::endl;
    number_value = roundf(value * (1 << fractionnal));
}

Fixed_point& Fixed_point::operator=(const Fixed_point& other) {
    // std::cout << "Copy assignment constructor called" << std::endl;
    number_value = other.number_value;

    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed_point& fixed) {
    out << fixed.toFloat();
    return out;
}

// ~~~~~~~~~~~~~~~~~~~~~  Comparison operators  ~~~~~~~~~~~~~~~~~~~~~ //

bool Fixed_point::operator>(const Fixed_point& other) const {
	return this->number_value > other.number_value;
}

bool Fixed_point::operator<(const Fixed_point& other) const {
	return this->number_value < other.number_value;
}

bool Fixed_point::operator<=(const Fixed_point& other) const {
	return this->number_value <= other.number_value;
}

bool Fixed_point::operator>=(const Fixed_point& other) const {
	return this->number_value >= other.number_value;
}

bool Fixed_point::operator==(const Fixed_point& other) const {
	return this->number_value == other.number_value;
}

bool Fixed_point::operator!=(const Fixed_point &other) const {
	return this->number_value != other.number_value;
}

// ~~~~~~~~~~~~~~~~~~~~~  Arithmetic operators  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed_point Fixed_point::operator+(const Fixed_point& other) const {
	Fixed_point result;
	result.number_value = this->number_value + other.number_value;
	return result;
}

Fixed_point Fixed_point::operator-(const Fixed_point& other) const {
	Fixed_point result;
	result.number_value = this->number_value - other.number_value;
	return result;
}

Fixed_point Fixed_point::operator*(const Fixed_point& other) const {
	Fixed_point result;
	result.number_value = this->number_value * other.number_value;
	result.number_value = result.number_value >> fractionnal;
	return result;
}

Fixed_point Fixed_point::operator/(const Fixed_point& other) const {
	Fixed_point result;
	result.number_value = this->number_value / other.number_value;
	result.number_value = result.number_value >> fractionnal;
	return result;
}

// ~~~~~~~~~~~~~~~~~~~~~  Increpent and decrement operators  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed_point& Fixed_point::operator++() {
	++number_value;
	return *this;
}

Fixed_point& Fixed_point::operator--() {
	--number_value;
	return *this;	
}

Fixed_point Fixed_point::operator++(int) {
	Fixed_point result(*this);
	++(*this);
	return result;	
}

Fixed_point Fixed_point::operator--(int) {
	Fixed_point result(*this);
	--(*this);
	return result;
}

// ~~~~~~~~~~~~~~~~~~~~~  Functions  ~~~~~~~~~~~~~~~~~~~~~ //

int Fixed_point::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return number_value;
}

void    Fixed_point::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    number_value = raw;
}

int Fixed_point::toInt(void) const {
    return number_value >> fractionnal;
}

float Fixed_point::toFloat(void) const {
    return (float)number_value / (1 << fractionnal);
}

Fixed_point& Fixed_point::min(Fixed_point& a, Fixed_point& b) {
	if (a.number_value < b.number_value)
		return a;
	return b;
}

const Fixed_point& Fixed_point::min(const Fixed_point&a, const Fixed_point& b) {
	if (a.number_value < b.number_value)
		return a;
	return b;
}

Fixed_point& Fixed_point::max(Fixed_point& a, Fixed_point& b) {
	if (a.number_value > b.number_value)
		return a;
	return b;
}

const Fixed_point& Fixed_point::max(const Fixed_point&a, const Fixed_point& b) {
	if (a.number_value > b.number_value)
		return a;
	return b;
}

// ~~~~~~~~~~~~~~~~~~~~~  Destructor  ~~~~~~~~~~~~~~~~~~~~~ //

Fixed_point::~Fixed_point() {
    // std::cout << "Destructor called" << std::endl;
}