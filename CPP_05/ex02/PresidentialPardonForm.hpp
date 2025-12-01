/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:09:45 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 15:48:43 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	std::string _target;
	
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();

        PresidentialPardonForm&  operator=(const PresidentialPardonForm& other);

        void    beExecute(Bureaucrat const & executor) const;
        std::string get_target() const;
};

std::ostream&	operator<<(std::ostream& out, const PresidentialPardonForm& form);

#endif