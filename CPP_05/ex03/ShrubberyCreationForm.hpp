/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:08:40 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/01 15:50:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& other);

        void    beExecute(Bureaucrat const & executor) const;
        std::string get_target() const;
};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& form);

#endif