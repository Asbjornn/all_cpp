/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SPan.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:35:59 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/22 11:07:02 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    std::vector<int>    _vector;
    unsigned int        _size;
    unsigned int        _pos;

    public:
        // --- Constructors & Destructors ---
        Span();
        Span(unsigned int value);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span();
        
        // --- Functions ---
        void addNumber(unsigned int value);
        
        unsigned int shortestSpan();
        unsigned int longestSpan();
        
        unsigned int getSize();
        unsigned int getPos();

        // --- Exception ---
        class SpanIsFull : public std::exception {
            public:
                virtual char const  *what(void) const throw();
        };

        class SpanTooSmall : public std::exception {
            public:
                virtual char const  *what(void) const throw();
        }
};

#endif