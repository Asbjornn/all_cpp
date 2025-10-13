/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:02:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/29 23:40:02 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string Weapon::getType() const {
    return (type);
}

void    Weapon::setType(std::string new_type) {
    type = new_type;
}