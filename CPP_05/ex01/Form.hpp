/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/28 15:11:57 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        // Constructors & Destructors
        Form();
        Form(std::string name, int min_sign, int min_exec);
        Form(const Form& copy);
        Form& operator=(const Form& other);
        ~Form();

        // Functions
        void    beSigned(Bureaucrat& bu);

        // Getters
        std::string get_name() const;
        bool        get_signed() const;
        int         get_grade_sign() const;
        int         get_grade_exec() const;
        
        // Exceptions
        class GradeTooHighException: public std::exception
        {
            public:
                virtual char const  *what(void) const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual char const  *what(void) const throw();
        };
    
    private:
        const std::string   _name;
        bool                _is_signed;
        const int           _grade_min_sign;
        const int           _grade_min_exec;
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif