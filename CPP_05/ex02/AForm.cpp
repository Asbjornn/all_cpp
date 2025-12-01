/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:16 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 09:19:34 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _is_signed(false), _grade_min_sign(50), _grade_min_exec(100) {
    std::cout << "AForm default constructor without paramaters called" << std::endl;
}

AForm::AForm(std::string name, int sign, int exec) :
    _name(name), _is_signed(false), _grade_min_sign(sign), _grade_min_exec(exec) {
    std::cout << "AForm constructor called" << std::endl;
    if (sign < 1 || exec < 1)
        throw (AForm::GradeTooHighException());
    else if (sign > 150 || exec > 150)
        throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm& copy) : 
    _name(copy._name), _is_signed(copy._is_signed), _grade_min_sign(copy._grade_min_sign), _grade_min_exec(copy._grade_min_exec) {
    std::cout << "AForm copy constructor called";
}

AForm&    AForm::operator=(const AForm& other) {
    std::cout << "AForm copy assignement constructor called";
    if (this != &other) {
        *this = other;
    }
    return *this;
}

AForm::~AForm() {
    std::cout << "AForm destructor called" << std::endl;
}

void    AForm::beSigned(Bureaucrat& bu) {
    if (bu.get_grade() > this->get_grade_sign())
        throw (AForm::GradeTooLowException());
    else
        this->_is_signed = true;
}

std::string AForm::get_name() const {
    return this->_name;
}

bool    AForm::get_signed() const {
    return this->_is_signed;
}

int AForm::get_grade_sign() const {
    return this->_grade_min_sign;
}

int AForm::get_grade_exec() const {
    return this->_grade_min_exec;
}

void    AForm::execute(Bureaucrat const & execute) const {
    if (!this->get_signed())
        throw (AForm::NotSignedException());
    else if (execute.get_grade() < this->get_grade_exec())
        throw (AForm::GradeTooLowException());
    else {
        std::cout << execute.get_name() << " execute form " << this->get_name() << std::endl;
        this->beExecute(execute);
    }
}

char const *AForm::GradeTooHighException::what(void) const throw() {
    return ("Grade is too High");
}

char const *AForm::GradeTooLowException::what(void) const throw() {
    return ("Grade is too Low");
}

char const *AForm::NotSignedException::what(void) const throw() {
    return ("Form is not Signed");
}

std::ostream& operator<<(std::ostream& out, const AForm& Aform) {
    out << "AForm: " << Aform.get_name();
    if (Aform.get_signed())
        out << ", is signed, ";
    else
        out << ", is not signed, ";
    out << "sign: " << Aform.get_grade_sign() << ", exec: " << Aform.get_grade_exec();
    return out;
}
