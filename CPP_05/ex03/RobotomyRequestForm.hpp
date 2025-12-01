/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:09:23 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 15:49:54 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <time.h>

class RobotomyRequestForm : public AForm
{
	std::string _target;
	
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();

        RobotomyRequestForm&  operator=(const RobotomyRequestForm& other);

        void    beExecute(Bureaucrat const & executor) const;
        std::string get_target() const;
};

std::ostream&	operator<<(std::ostream& out, const RobotomyRequestForm& form);

#endif
