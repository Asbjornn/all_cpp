/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 09:38:06 by gcauchy           #+#    #+#             */
/*   Updated: 2025/09/22 10:06:44 by gcauchy          ###   ########.fr       */
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
    
    for (size_t i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return ;
        }
    }
}

void    Harl::debug(void) {
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger";
    std::cout << ". I really do!";
}

void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}

void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years, whereas you started working here just last month.";
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now.";
}