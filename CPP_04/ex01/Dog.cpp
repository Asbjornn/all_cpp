/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:40 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/24 16:10:58 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
    _brain = new Brain();
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operrator called" << std::endl;
    this->type = other.type;
    _brain = new Brain();
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "Wouaf Wouaf ! Bark Bark Wouaf !!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}
