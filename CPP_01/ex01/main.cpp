/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:25:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/13 14:46:42 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int size(5);

	if (size <= 0){
		std::cout << RED << "size under or equal to 0" << RESET << std::endl;
		return (0);
	}
	
    Zombie* zom = zombieHorde(size, "Jean");
	
	if (!zom) {
		std::cout << RED << "Not a valid name" << RESET << std::endl;
		delete[] zom;
		return (0);
	}
	
    for (int i = 0; i < size; i++)
        zom[i].announce();
    delete[] zom;
    return (0);
}