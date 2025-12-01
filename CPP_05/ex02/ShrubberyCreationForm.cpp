/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:08:53 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 09:31:32 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("ShrubberyCreationForm", 145, 137) {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
    this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm::AForm("ShrubberyCreationForm", 145, 137) {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm::AForm(copy) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    this->_target = copy._target;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    std::cout << "ShrubberyCreationForm copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        AForm::operator=(other);        
        this->_target = other._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::get_target() const {
    return this->_target;
}

void    ShrubberyCreationForm::beExecute(Bureaucrat const & executor) {
    std::string name = this->_target + "_shrubbery";
    std::ofstream out(name);
    if (!out.is_open())
    {
        std::cout << "File " << name << " failed to open" << std::endl;
        return ;
    }
    out << "ASCII TREE" << std::endl;
    out.close();
}