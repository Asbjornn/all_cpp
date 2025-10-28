/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:15:46 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/21 17:16:11 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Constructor WrongAnimal called" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "Constructor copy WrongAnimal called" << std::endl;
	this->type = copy.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "Copy asignment WrongAnimal called" << std::endl;
	this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Nothing to hear .." << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}