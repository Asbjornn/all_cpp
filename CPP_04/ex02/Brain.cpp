/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:29:40 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 12:12:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy contructor called" << std::endl;
    for (int i = 0; i < 100; i++)
		this->setIdea(copy.ideas[i], i);
	
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy asignment called" << std::endl;
	if (this != &other)
	{	
		for (int i = 0; i < 100; i++)
			this->setIdea(other.ideas[i], i);
	}
		
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(std::string const & idea, int id) {
	if (id >= 0 && id < 100)
		ideas[id] = idea;
	else
		std::cout << "index is out of bound" << std::endl;
}

std::string	Brain::getIdea(int id) {
	if (id >= 0 && id < 100)
		return ideas[id];
	else
		std::cout << "index is out of bound" << std::endl;
	return "";
}
