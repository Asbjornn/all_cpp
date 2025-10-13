/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:01:37 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/05 17:58:07 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack (void) {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon yet" << std::endl;
}

void HumanB::setWeapon (Weapon& w) {
    weapon = &w;
}