/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:27 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/28 17:56:57 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    std::cout << "=== Creaction of Form with exceptions ===" << std::endl;
    try
    {
        Form job("job", 0, 50);
        std::cout << job << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        Form fold("fold", 3, 159);
        std::cout << fold << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n=== Modification of Bureacrat's grade ===" << std::endl;
    try
    {
        Bureaucrat  Jean("Jean", 15);
        Form        form("PLA", 20, 45);
        std::cout << Jean << std::endl;
        std::cout << form << std::endl;
        Jean.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat  Noah("Noah", 132);
        Form        form("SV", 30, 60);
        std::cout << Noah << std::endl;
        std::cout << form << std::endl;
        Noah.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
