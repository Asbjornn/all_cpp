/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:06:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/23 17:02:06 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name) {
	if (name.empty() || N <= 0)
		return (NULL);
        
    Zombie* zoms = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        zoms[i].set_name(name);
    return (zoms);
}
