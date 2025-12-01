/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:40 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 11:36:35 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operrator called" << std::endl;
	if (this != &other)
    	this->type = other.type;
	
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "Wouaf Wouaf ! Bark Bark Wouaf !!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}