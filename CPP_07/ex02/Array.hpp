/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:24:25 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/05 09:43:33 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Arrayy {
        T*  _array;
    
    public:
        Array() {
            this->_array = new T[];
        };
        
        Array(unsigned int n) {
            this->_array = new T[n];
        };
        
        Array(const Arrayy& copy) {
            this->_array = new copy->get_array();
        };
        
        ~Array() {
            delete[] this->_array;
        };

        Arrayy&  operator=(const Arrayy& other) {
            if (*this != other) {
                this->_array = new copy->get_array();
            }
            return *this;
        };

        int    size() const {
            int i;
            for (i = 0; this->_array[i]; i++)
                ;
            return i;
        };

        T*  get_array() const {
            return this->_array;
        }
};

#endif