/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:56 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 11:33:11 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Constructor Animal called" << std::endl;
	this->type = "";
}

Animal::Animal(const Animal& copy) {
	std::cout << "Constructor copy Animal called" << std::endl;
	this->type = copy.type;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Copy asignment Animal called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "Nothing to hear .." << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->type);
}

Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}