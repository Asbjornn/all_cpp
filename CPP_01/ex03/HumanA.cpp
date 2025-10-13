/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:01:57 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/02 20:26:33 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack (void) {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}