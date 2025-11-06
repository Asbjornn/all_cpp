/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:50 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 11:36:45 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operrator called" << std::endl;
	if (this != &other)
    	this->type = other.type;
		
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Meeooww .. Meeeooowwwww !" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}