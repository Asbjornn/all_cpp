/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:50 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/28 15:34:51 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
    _brain = new Brain(*copy._brain);
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operrator called" << std::endl;
    this->type = other.type;
    _brain = new Brain(*other._brain);
    return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Meeooww .. Meeeooowwwww !" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}