/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:51 by gcauchy           #+#    #+#             */
/*   Updated: 2025/09/02 21:29:54 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << "Harl debug: [";
    harl.complain("DEBUG");
    std::cout << "]" << std::endl << std::endl;

    std::cout << "Harl info: [";
    harl.complain("INFO");
    std::cout << "]" << std::endl << std::endl;

    std::cout << "Harl warning: [";
    harl.complain("WARNING");
    std::cout << "]" << std::endl << std::endl;

    std::cout << "Harl error: [";
    harl.complain("ERROR");
    std::cout << "]" << std::endl;
    return (0);
}