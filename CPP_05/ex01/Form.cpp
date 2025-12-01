/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:16 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/28 18:00:54 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _is_signed(false), _grade_min_sign(50), _grade_min_exec(100) {
    std::cout << "Form default constructor without paramaters called" << std::endl;
}

Form::Form(std::string name, int sign, int exec) :
    _name(name), _is_signed(false), _grade_min_sign(sign), _grade_min_exec(exec) {
    std::cout << "Form constructor called" << std::endl;
    if (sign < 1 || exec < 1)
        throw (Form::GradeTooHighException());
    else if (sign > 150 || exec > 150)
        throw (Form::GradeTooLowException());
}

Form::Form(const Form& copy) : 
    _name(copy._name), _is_signed(copy._is_signed), _grade_min_sign(copy._grade_min_sign), _grade_min_exec(copy._grade_min_exec) {
    std::cout << "Form copy constructor called";
}

Form&    Form::operator=(const Form& other) {
    std::cout << "Form copy assignement constructor called";
    if (this != &other) {
        *this = other;
    }
    return *this;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

void    Form::beSigned(Bureaucrat& bu) {
    if (bu.get_grade() > this->get_grade_sign())
        throw (Form::GradeTooLowException());
    else
        this->_is_signed = true;
}

std::string Form::get_name() const {
    return this->_name;
}

bool    Form::get_signed() const {
    return this->_is_signed;
}

int Form::get_grade_sign() const {
    return this->_grade_min_sign;
}

int Form::get_grade_exec() const {
    return this->_grade_min_exec;
}

char const *Form::GradeTooHighException::what(void) const throw() {
    return ("Grade is too High");
}

char const *Form::GradeTooLowException::what(void) const throw() {
    return ("Grade is too Low");
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "Form: " << form.get_name();
    if (form.get_signed())
        out << ", is signed, ";
    else
        out << ", is not signed, ";
    out << "sign: " << form.get_grade_sign() << ", exec: " << form.get_grade_exec();
    return out;
}
