/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:51 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 15:02:37 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << "\033[0;36mHarl debug:\033[0m [";
    harl.complain("DEBUG");
    std::cout << "]" << std::endl << std::endl;

    std::cout << "\033[38;2;255;255;0mHarl info:\033[0m [";
    harl.complain("INFO");
    std::cout << "]" << std::endl << std::endl;

    std::cout << "\033[38;2;255;128;0mHarl warning:\033[0m [";
    harl.complain("WARNING");
    std::cout << "]" << std::endl << std::endl;

    std::cout << "\033[0;31mHarl error:\033[0m [";
    harl.complain("ERROR");
    std::cout << "]" << std::endl;
	
    return (0);
}