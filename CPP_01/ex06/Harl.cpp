/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:23:53 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 15:10:15 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int index;
    for (index = 0; index < 4; index++)
        if (levels[index] == level)
            break;

    switch (index) {
    case 0:
        info();
    case 1:
        debug();
    case 2:
        warning();
    case 3:
		error();
        break;
    default:
        std::cout << "Probably complaining about insignificant things" << std::endl;
    }
}

void    Harl::debug(void) {
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger";
    std::cout << ". I really do!";
    std::cout << std:: endl;
}

void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std:: endl;
}

void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years, whereas you started working here just last month.";
    std::cout << std:: endl;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std:: endl;
}