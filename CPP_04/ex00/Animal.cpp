/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:56 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 16:09:12 by gcauchy          ###   ########.fr       */
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
	this->type = other.type;
}

void	Animal::makeSound(void) {
	std::cout << "Nothing to hear .." << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}