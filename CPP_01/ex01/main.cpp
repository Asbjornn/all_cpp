/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:25:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/29 23:36:43 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int size(5);
    Zombie* zom = zombieHorde(size, "George");
    for (int i = 0; i < size; i++)
        zom[i].announce();
    delete[] zom;
    return (0);
}