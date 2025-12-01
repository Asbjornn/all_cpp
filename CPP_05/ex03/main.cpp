/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:27 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 14:10:24 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
    Intern intern;

    std::cout << "\n=== Test 1: Shrubbery Creation ===" << std::endl;
    AForm* f1 = intern.makeForm("shrubbery creation", "Garden");
    delete f1;

    std::cout << "\n=== Test 2: Robotomy Request ===" << std::endl;
    AForm* f2 = intern.makeForm("robotomy request", "Bender");
    delete f2;

    std::cout << "\n=== Test 3: Presidential Pardon ===" << std::endl;
    AForm* f3 = intern.makeForm("presidential pardon", "Marvin");
    delete f3;

    std::cout << "\n=== Test 4: Unknown form ===" << std::endl;
    AForm* f4 = intern.makeForm("invention request", "Unknown");
    if (!f4)
        std::cout << "Form creation failed as expected.\n";

    return 0;
}
