/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:24:25 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/05 12:48:10 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
        T*  _array;
        unsigned int _size;
    
    public:
        Array() : _array(new T[0]()), _size(0) {
        };
        
        Array(unsigned int n) : _array(new T[n]), _size(n) {
        };
        
        Array(const Array& copy) : _array(new T[copy._size]), _size(copy._size) {
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = copy._array[i]; 
        };
        
        ~Array() {
            delete[] _array;
        };

        Array&  operator=(const Array& other) {
            if (this != &other) {
                delete[] _array;

                _size = other._size;
                _array = new T[other._size];
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = other._array[i];
            }
            return *this;
        };
            
        class IndexOutOfBounds: public std::exception {
            public:
                virtual char const *what(void) const throw() {
                    return "Exception index out of bounds";
                }
        };
            
        unsigned int    size() const {
            return _size;
        };

        T& operator[](unsigned int i) {
            if (i >= _size)  
                throw Array::IndexOutOfBounds();
            return _array[i];
        };
};

#endif