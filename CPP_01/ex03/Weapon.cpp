/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:02:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/23 17:10:47 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    
}

Weapon::Weapon(std::string s) {
    this->type = s;
}

const std::string Weapon::getType() const {
    return (type);
}

void    Weapon::setType(std::string new_type) {
    type = new_type;
}