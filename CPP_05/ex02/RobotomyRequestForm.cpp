/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:09:16 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 09:34:35 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("RobotomyRequestForm", 145, 137) {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
    this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm::AForm("RobotomyRequestForm", 145, 137) {
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

void    RobotomyRequestForm::beExecute(Bureaucrat const & executor) {
}