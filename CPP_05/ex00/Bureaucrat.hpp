/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:54:55 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 15:53:48 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	const std::string   _name;
	int                 _grade;
	
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
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bu);