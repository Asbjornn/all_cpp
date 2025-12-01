/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:27 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 15:21:33 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    std::cout << "=== Creaction of Bureacrats with exceptions ===" << std::endl;
    try
    {
        Bureaucrat Albert("Albert", 0);
        std::cout << Albert << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat Paul("Paul", 151);
        std::cout << Paul << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n=== Modification of Bureacrat's grade ===" << std::endl;
    try
    {
        Bureaucrat Jean("Jean", 5);
        std::cout << Jean << std::endl;
        Jean.up_grade(); // 4
        std::cout << Jean << std::endl;
        Jean.up_grade(); // 3
        std::cout << Jean << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat Noah("Noah", 147);
        std::cout << Noah << std::endl;
        Noah.down_grade(); // 148
        std::cout << Noah << std::endl;
        Noah.down_grade(); // 149
        std::cout << Noah << std::endl;
        Noah.down_grade(); // 150
        std::cout << Noah << std::endl;
        Noah.down_grade(); // 151 catch exception
        std::cout << Noah << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
