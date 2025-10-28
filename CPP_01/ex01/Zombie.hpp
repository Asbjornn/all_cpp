/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:24:27 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/28 12:08:54 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie();
        Zombie (std::string zombie_name);
        ~Zombie();
		
        void announce (void);
        void set_name (std::string zombie_name);
    
    private:
        std::string name;
};

Zombie* zombieHorde (int N, std::string name);

#endif