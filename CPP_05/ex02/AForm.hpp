/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:09 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/28 18:08:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	const std::string   _name;
	bool                _is_signed;
	const int           _grade_min_sign;
	const int           _grade_min_exec;

    public:
        // Constructors & Destructors
        AForm();
        AForm(std::string name, int min_sign, int min_exec);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& other);
        ~AForm();

        // Functions
        void    beSigned(Bureaucrat& bu);
        void    execute(Bureaucrat const & executor) const;
        virtual void    beExecute(Bureaucrat const & executor) const = 0;

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
        class NotSignedException: public std::exception
        {
            public:
                virtual char const  *what(void) const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const AForm& Aform);

#endif