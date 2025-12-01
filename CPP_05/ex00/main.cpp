/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:27 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/28 17:15:07 by gcauchy          ###   ########.fr       */
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
        Bureaucrat Paul("Paul", 155);
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
        Jean.up_grade();
        std::cout << Jean << std::endl;
        Jean.up_grade();
        std::cout << Jean << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat Noah("Noah", 140);
        std::cout << Noah << std::endl;
        Noah.down_grade();
        std::cout << Noah << std::endl;
        Noah.down_grade();
        std::cout << Noah << std::endl;
        Noah.down_grade();
        std::cout << Noah << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
