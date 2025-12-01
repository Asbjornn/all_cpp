/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:58 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/28 15:40:19 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
    std::cout << "Bureaucrat default constructor without paramaters called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {
    std::cout << "Bureaucrat copy constructor called";
}

Bureaucrat&    Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << "Bureaucrat copy assignement constructor called";
    if (this != &other) {
        this->_grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

void    Bureaucrat::up_grade() {
    if (get_grade() - 1 < 1)
        throw (Bureaucrat::GradeTooHighException());
    this->_grade -= 1;
}

void    Bureaucrat::down_grade() {
    if (get_grade() + 1 > 150)
        throw (Bureaucrat::GradeTooLowException());
    this->_grade += 1;
}

int Bureaucrat::get_grade() const {
    return this->_grade;
}

std::string Bureaucrat::get_name() const {
    return this->_name;
}

char const  *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Grade is too high");
}

char const  *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bu) {
    out << bu.get_name() << ", bureaucrat grade " << bu.get_grade();
    return out;
}
