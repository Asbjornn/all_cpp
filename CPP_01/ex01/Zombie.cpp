/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:25:31 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/23 17:00:53 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () {
    std::cout << "nameless zombie is created" << std::endl;
}

Zombie::Zombie (std::string zombie_name) {
	this->name = zombie_name;
    std::cout << name << " is created" << std::endl;
}

void Zombie::set_name (std::string zombie_name) {
	this->name = zombie_name;
}

void Zombie::announce ( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie () {
    std::cout << name << " is destroyed" << std::endl;
}