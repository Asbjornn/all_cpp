/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:47:54 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 14:29:04 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
void easyfind(const T& container, int n) {
	int a = 0;;
    for (typename T::const_iterator i = container.begin(); i != container.end() ; i++)
    {
        if (*i == n)
        {
            std::cout << "FOUND " << n << " at index: " << a << std::endl;
            return ;
        }
		a++;
    }
    std::cout << "pas la ?" << std::endl;
}

#endif