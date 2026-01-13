/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:47:54 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/08 10:48:02 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class NotFound : public std::exception {
	public:
		virtual char const  *what(void) const throw() {
			return "Number not found";
		};
};

// --- Template function
template <typename T>
void easyfind(const T& container, int n) {
    for (typename T::const_iterator i = container.begin(); i != container.end() ; i++)
        if (*i == n)
            return ;

    throw NotFound();
}

#endif