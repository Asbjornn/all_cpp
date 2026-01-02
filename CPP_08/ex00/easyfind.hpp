/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:47:54 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/02 13:50:56 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

// --- Template function

template <typename T>
void easyfind(const T& container, int n) {
    for (typename T::const_iterator i = container.begin(); i != container.end() ; i++)
        if (*i == n)
            return ;

    throw 1;
}

#endif