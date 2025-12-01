/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:09:23 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 09:32:55 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();

        RobotomyRequestForm&  operator=(const RobotomyRequestForm& other);

        void    beExecute(Bureaucrat const & executor);
        std::string get_target() const;
    
    private:
        std::string _target;
};


#endif
