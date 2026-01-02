/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:35:39 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/26 17:17:10 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// --- Constructors & Destructors ---

Span::Span() : _size(0) {
	_vector.reserve(0);
}

Span::Span(unsigned int value) : _size(value) {
	_vector.reserve(getSize());
}

Span::Span(const Span& copy) : _vector(copy._vector), _size(copy._size) {
}

Span& Span::operator=(const Span& other) {
	if (this != &other)
	{
		_vector = other._vector;
		_size = other._size;
	}
	return *this;
}

Span::~Span() {
	
}


// --- Functions ---

void    Span::addNumber(unsigned int value) {
	if (_vector.size() >= _size)
		throw SpanIsFull();
	_vector.push_back(value);
}

void	Span::multipleNumber(unsigned int range) {
	for (unsigned int i = 0; i != range; i++)
		addNumber(rand() % 1000);
}

unsigned int    Span::shortestSpan() {
	if (_vector.size() <= 1)
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
	if (_vector.size() <= 1)
		throw SpanTooSmall();
	
	unsigned int min = *std::min_element(_vector.begin(), _vector.end());
	unsigned int max = *std::max_element(_vector.begin(), _vector.end());

	return (max - min);
}

unsigned int    Span::getSize() {
	return this->_size;
}

unsigned int	Span::peek(unsigned int index) const {
	if (index >= _vector.size())
		throw IndexOutOfBounds();
	return _vector[index];
}


// --- Exception ---

char const *Span::SpanIsFull::what(void) const throw() {
	return "Span is already full";
}

char const  *Span::SpanTooSmall::what(void) const throw() {
	return "Not enough things in the Span";
}

char const  *Span::IndexOutOfBounds::what(void) const throw() {
	return "Index out of bounds";
}