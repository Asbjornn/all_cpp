/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:47:24 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/22 09:34:50 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include "easyfind.hpp"

int main(void) {
    std::cout << " ---  Vector test ---" << std::endl;
    std::vector<int> tab;
    for (int i = 1; i < 6; i++)
        tab.push_back(i);

    try
    {
        easyfind(tab, 3);
        std::cout << "3 is found in tab" << std::endl;
        easyfind(tab, 40);
        std::cout << "40 is found in tab" << std::endl;
    }
    catch(...)
    {
        std::cout << "easyfind did not found" << std::endl;
    }

    std::cout << "\n ---  Deque test ---" << std::endl;
    std::deque<int> tab2;
    for (int i = 10; i < 16; i++)
        tab2.push_back(i);

    try
    {
        easyfind(tab2, 14);
        std::cout << "14 is found in tab2" << std::endl;
        easyfind(tab2, 5);
        std::cout << "40 is found in tab2" << std::endl;
    }
    catch(...)
    {
        std::cout << "easyfind did not found" << std::endl;
    }
    
    return 0;
}