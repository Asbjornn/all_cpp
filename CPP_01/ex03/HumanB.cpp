/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:01:37 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 14:47:55 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(nullptr) {
	std::cout << name << " is created" << std::endl;
}

void HumanB::attack (void) {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon yet" << std::endl;
}

void HumanB::setWeapon (Weapon& w) {
    weapon = &w;
}