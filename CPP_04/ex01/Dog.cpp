/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:40 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 12:01:15 by gcauchy          ###   ########.fr       */
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
    _brain = new Brain(*copy._brain);
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operrator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->_brain;
		_brain = new Brain(*other._brain);
	}
	
    return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "Wouaf Wouaf ! Bark Bark Wouaf !!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

void	Dog::setBrain(const Brain& brain) {
	if (this->_brain)
		delete this->_brain;
	_brain = new Brain(brain);
}

Brain&	Dog::getBrain(void) const {
	return (*this->_brain);
}