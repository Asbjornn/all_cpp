/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SPan.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:35:59 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/22 16:33:55 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <time.h>

class Span {
    std::vector<unsigned int>    _vector;
    unsigned int        _size;

    public:
        // --- Constructors & Destructors ---
        Span();
        Span(unsigned int value);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span();
        
        // --- Functions ---
        void addNumber(unsigned int value);
		void multipleNumber(unsigned int range);
        
        unsigned int shortestSpan();
        unsigned int longestSpan();
        
        unsigned int getSize();

        unsigned int peek(unsigned int index) const;

        // --- Exception ---
        class SpanIsFull : public std::exception {
            public:
                virtual char const  *what(void) const throw();
        };

        class SpanTooSmall : public std::exception {
            public:
                virtual char const  *what(void) const throw();
        };

        class IndexOutOfBounds : public std::exception {
            public:
                virtual char const  *what(void) const throw();
        };
};

#endif