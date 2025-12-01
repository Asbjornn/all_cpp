/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:09:16 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 11:42:53 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("RobotomyRequestForm", 72, 45) {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
    this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm::AForm("RobotomyRequestForm", 72, 45) {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm::AForm(copy) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    this->_target = copy._target;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    std::cout << "RobotomyRequestForm copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        AForm::operator=(other);        
        this->_target = other._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string RobotomyRequestForm::get_target() const {
    return this->_target;
}

void    RobotomyRequestForm::beExecute(Bureaucrat const & executor) const {
	std::cout << "DDDRRRRLLLLLLL BBZZZZZ DDRRLLLLLLL DDRRRLLL" << std::endl;
	srand(time(0));
	int	r = rand() % 100;
	std::cout << "random = " << r << std::endl;
	if (r < 49)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << this->_target << " has failed to robotomized ..." << std::endl;
	std::cout << executor.get_name() << " finished robotomy session" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& form) {
    out << "RobotomyRequestForm: " << form.get_name();
    if (form.get_signed())
        out << ", is signed, ";
    else
        out << ", is not signed, ";
    out << "sign: " << form.get_grade_sign() << ", exec: " << form.get_grade_exec();
    return out;
}