/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:19:50 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/02 14:05:18 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    
    
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy) {};
        MutantStack& operator=(const MutantStack& other) {
            if (this != &other)
                std::stack<T>::operator=(other);
            return *this;
        };
       ~MutantStack() {};

       typedef typename std::stack<T>::container_type::iterator iterator;
       typedef typename std::stack<T>::container_type::const_iterator const_iterator;

       iterator begin() {return this->c.begin();}
       iterator end() {return this->c.end();}

       const_iterator begin() const {return this->c.begin();}
       const_iterator end() const {return this->c.end();}
        
};

#endif