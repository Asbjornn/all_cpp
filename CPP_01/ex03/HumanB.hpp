/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:01:20 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/05 18:03:28 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string n) : name(n), weapon(nullptr) {};
        void attack(void);
        void setWeapon(Weapon& w);
        
    private:
        std::string name;
        Weapon* weapon;
};

#endif