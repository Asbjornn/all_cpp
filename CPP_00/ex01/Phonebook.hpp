/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:19:07 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 14:09:45 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook {
	public:
		PhoneBook();
		void add_contact();
		void search();
		void get_contact_line();
	
	private:
		Contact contacts[8];
		int		rear;
		int		size;
};

# endif