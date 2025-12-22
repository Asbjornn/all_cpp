/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:35:39 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/22 15:38:38 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// --- Constructors & Destructors ---

Span::Span() : _size(0), _pos(0) {
	_vector.reserve(0);
}

Span::Span(unsigned int value) : _size(value), _pos(0) {
	_vector.reserve(getSize());
}

Span::Span(const Span& copy) : _vector(copy._vector), _size(copy._size), _pos(copy._pos) {
}

Span& Span::operator=(const Span& other) {
	if (this != &other)
		*this = other;
	return *this;
}

Span::~Span() {
	
}


// --- Functions ---

void    Span::addNumber(unsigned int value) {
	if (getPos() + 1 > _size)
		throw SpanIsFull();
	_vector.push_back(value);
	_pos++;
	std::cout << "1" << std::endl;
}

void	Span::multipleNumber(unsigned int range) {
	srand(time(0));
	for (unsigned int i = 0; i != range; i++)
	{
		try
		{
			addNumber(i);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
}

unsigned int    Span::shortestSpan() {
	if (getSize() <= 1)
		throw SpanTooSmall();

	std::vector<unsigned int> v(this->_vector);
	unsigned int	shortest = UINT_MAX;

	std::sort (v.begin(), v.end());
	for (std::vector<unsigned int>::iterator it = v.begin(); it != v.end() - 1; it++)
	{
		unsigned int diff = *(it + 1) - *it;
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

unsigned int    Span::longestSpan() {
	std::vector<unsigned int> v(this->_vector);
	unsigned int    small;
	unsigned int    big;
	
	std::sort (v.begin(), v.end());
	small = *v.begin();

	std::sort (v.rbegin(), v.rend());
	big = *v.begin();

	return (big - small);
}

unsigned int    Span::getSize() {
	return this->_size;
}

unsigned int    Span::getPos() {
	return this->_pos;
}


// --- Exception ---

char const *Span::SpanIsFull::what(void) const throw() {
	return "Span is already full";
}

char const  *Span::SpanTooSmall::what(void) const throw() {
	return "Not enough things in the Span";
}