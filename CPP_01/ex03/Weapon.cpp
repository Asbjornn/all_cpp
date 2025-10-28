/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:02:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 14:42:21 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string s) {
	std::cout << "Weapon constructor called" << std::endl;
    this->type = s;
}

const std::string Weapon::getType() const {
    return (type);
}

void    Weapon::setType(std::string new_type) {
    type = new_type;
}