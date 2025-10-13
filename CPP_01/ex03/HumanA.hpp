/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:00:54 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/05 18:03:36 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string n, Weapon& w) : name(n) , weapon(w) {};
        void attack(void);
        
    private:
        std::string name;
        Weapon& weapon;
};

#endif