/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:23:59 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/02 14:39:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
    Array<int> oui(5);

    for (unsigned int i = 0; i < oui.size(); i++)
        oui[i] = i + 1;
    for (unsigned int i = 0; i < oui.size(); i++)
        std::cout << oui[i];

    std::cout << std::endl << "oui.size() = " << oui.size() << std::endl;

    try
    {
        oui[10] = 10;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    
    Array<int> copy = oui;
    copy[0] = 100;
    
    std::cout << "oui[0] = " << oui[0] << std::endl;
    std::cout << "copy[0] = " << copy[0] << std::endl;
    
    return 0;
}