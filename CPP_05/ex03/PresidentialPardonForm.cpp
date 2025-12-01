/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:09:53 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 11:39:02 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("PresidentialPardonForm", 25, 5) {
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
    this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm::AForm("PresidentialPardonForm", 25, 5) {
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm::AForm(copy) {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    this->_target = copy._target;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    std::cout << "PresidentialPardonForm copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        AForm::operator=(other);        
        this->_target = other._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

std::string PresidentialPardonForm::get_target() const {
    return this->_target;
}

void    PresidentialPardonForm::beExecute(Bureaucrat const & executor) const {
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	(void)executor;
}

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& form) {
    out << "PresidentialPardonForm: " << form.get_name();
    if (form.get_signed())
        out << ", is signed, ";
    else
        out << ", is not signed, ";
    out << "sign: " << form.get_grade_sign() << ", exec: " << form.get_grade_exec();
    return out;
}
