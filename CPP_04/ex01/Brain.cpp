/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:29:40 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/24 16:13:21 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy contructor called" << std::endl;
    (void)copy;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy asignment called" << std::endl;
    (void)other;
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
