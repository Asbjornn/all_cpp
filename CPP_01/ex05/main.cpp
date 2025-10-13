/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:51 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/13 15:17:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << CYAN << "Harl debug:" << RESET << " [";
    harl.complain("DEBUG");
    std::cout << "]" << std::endl << std::endl;

    std::cout << YELLOW << "Harl info:" << RESET << " [";
    harl.complain("INFO");
    std::cout << "]" << std::endl << std::endl;

    std::cout << ORANGE<< "Harl warning:" << RESET << " [";
    harl.complain("WARNING");
    std::cout << "]" << std::endl << std::endl;

    std::cout << RED << "Harl error:" << RESET <<" [";
    harl.complain("ERROR");
    std::cout << "]" << std::endl;

	std::cout << BLINK << "couocou" << RESET << std::endl;
    return (0);
}