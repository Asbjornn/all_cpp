/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:25:31 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 11:16:44 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () {
    std::cout << name << " is created" << std::endl;
}

Zombie::Zombie (std::string zombie_name) {
	if (zombie_name.empty())
	{
		std::cout << "Empty name set to a default value" << std::endl;
		this->name = "Claude";
	}
	else
		this->name = zombie_name;
	std::cout << name << " is created" << std::endl;
}

void Zombie::announce ( void ) {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie () {
    std::cout << name << " is destroyed" << std::endl;
}