/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:24:27 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/29 23:30:18 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie() {};
        Zombie (std::string zombie_name);
        void announce ( void );
        ~Zombie();
    
    private:
        std::string name;
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif