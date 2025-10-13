/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:25:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/08/29 23:32:48 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    randomChump("Bob");

    Zombie* George = newZombie("George");
    George->announce();
    delete George;
    return (0);
}