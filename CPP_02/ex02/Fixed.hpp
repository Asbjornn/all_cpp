/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:17:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 11:06:10 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed_point {
	public:
		Fixed_point();
		Fixed_point(const Fixed_point& copy);
		Fixed_point(const int value);
		Fixed_point(const float value);
		
		Fixed_point& operator=(const Fixed_point& other);

		// Comparison operators
		bool operator>(const Fixed_point& other) const;
		bool operator<(const Fixed_point& other) const;
		bool operator<=(const Fixed_point& other) const;
		bool operator>=(const Fixed_point& other) const;
		bool operator==(const Fixed_point& other) const;
		bool operator!=(const Fixed_point& other) const;

		// Arithmetic operators
		Fixed_point operator+(const Fixed_point& other) const;
		Fixed_point operator-(const Fixed_point& other) const;
		Fixed_point operator*(const Fixed_point& other) const;
		Fixed_point operator/(const Fixed_point& other) const;

		// Increment and decrement operators
		Fixed_point& operator++();
		Fixed_point& operator--();
		Fixed_point operator++(int);
		Fixed_point operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		static	Fixed_point& min(Fixed_point& a, Fixed_point& b);
		static const Fixed_point& min(const Fixed_point& a, const Fixed_point& b);
		static	Fixed_point& max(Fixed_point& a, Fixed_point& b);
		static const Fixed_point& max(const Fixed_point& a, const Fixed_point& b);

		~Fixed_point();

	private:
		int					number_value;
		static const int	fractionnal;

};

std::ostream& operator<<(std::ostream& out, const Fixed_point& fixed);

#endif