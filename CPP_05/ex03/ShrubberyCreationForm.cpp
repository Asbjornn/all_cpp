/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:08:53 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 11:15:04 by gcauchy          ###   ########.fr       */
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

void    ShrubberyCreationForm::beExecute(Bureaucrat const & executor) const {
    std::string name = this->_target + "_shrubbery";
    std::ofstream out(name);
    if (!out.is_open())
    {
        std::cout << "File " << name << " failed to open" << std::endl;
        return ;
    }
    out << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n";
	out << " \\  _-     -_  /\n   ~  \\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\n\n\n";
	out << "    oxoxoo    ooxoo\n  ooxoxo oo  oxoxooo\n oooo xxoxoo ooo ooox\n oxo o oxoxo  xoxxoxo\n";
	out << "  oxo xooxoooo o ooo\n    ooo\\oo\\  /o/o\n        \\  \\/ /\n         |   /\n         |  |\n";
	out << "         | D|\n         |  |\n         |  |\n  ______/____\\____\n";
    out.close();
	std::cout << executor.get_name() << " created a Shrubbery" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& form) {
    out << "ShrubberyCreationForm: " << form.get_name();
    if (form.get_signed())
        out << ", is signed, ";
    else
        out << ", is not signed, ";
    out << "sign: " << form.get_grade_sign() << ", exec: " << form.get_grade_exec();
    return out;
}