/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:25:31 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/29 23:26:43 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string zombie_name) {
    this->name = zombie_name;
}

void Zombie::announce ( void ) {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie () {
    std::cout << name << " is destroyed" << std::endl;
}