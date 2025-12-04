/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:30:41 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/04 11:23:44 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void    swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename U>
U   min(U& a, U& b) {
    if (a < b)
        return a;
    return b;
}

template <typename V>
V   max(V& a, V& b) {
    if (a > b)
        return a;
    return b;
}

#endif