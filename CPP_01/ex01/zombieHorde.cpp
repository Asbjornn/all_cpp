/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:06:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/13 14:22:24 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name) {
    Zombie* zoms = new Zombie[N];
    
	if (name.empty())
		return (NULL);
    for (int i = 0; i < N; i++)
        zoms[i].set_name(name);
    return (zoms);
}