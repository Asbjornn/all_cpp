/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:59:50 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/29 23:40:38 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
    public:
        Weapon() {};
        Weapon (std::string s) : type(s) {};
        const std::string getType() const;
        void setType(std::string new_type);
        
    private:
        std::string type;
};

#endif