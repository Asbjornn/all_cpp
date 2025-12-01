/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:55 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/28 15:41:21 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        // Constructors & Destructors
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();

        // Functions
        int         get_grade() const;
        std::string get_name() const;
        void        up_grade();
        void        down_grade();
        void        signForm(Form& form); // new function

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
        int                 _grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bu);

#endif