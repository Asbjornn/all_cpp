/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:23:53 by gcauchy           #+#    #+#             */
/*   Updated: 2025/09/22 10:05:48 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[4])(void)  = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int index;
    for (index = 0; index < 4; index++)
        if (levels[index] == level)
            break;

    switch (index) {
    case 0:
        while (index < 4)
        {
            (this->*functions[index++])();
            std::cout << std:: endl;
        }
        break;
    case 1:
        while (index < 4)
        {
            (this->*functions[index++])();
            std::cout << std:: endl;
        }
        break;
    case 2:
        while (index < 4)
        {
            (this->*functions[index++])();
            std::cout << std:: endl;
        }
        break;
    case 3:
        while (index < 4)
        {
            (this->*functions[index++])();
            std::cout << std:: endl;
        }
        break;
    default:
        std::cout << "Probably complaining about insignificant things" << std::endl;
        break;
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