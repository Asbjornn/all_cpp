/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:01:57 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 14:46:33 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : weapon(w) {
    this->name = n;
    std::cout << name << " is created" << std::endl;
}

void HumanA::attack (void) {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}