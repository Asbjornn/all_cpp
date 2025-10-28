/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:17:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/28 13:28:57 by gcauchy          ###   ########.fr       */
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
		Fixed_point(const int value);				// Int constructor
		Fixed_point(const float value);				// Float constructor
		Fixed_point& operator=(const Fixed_point&);
		
		int     getRawBits(void) const;
		void    setRawBits(int const raw);
		int     toInt(void) const;
		float   toFloat(void) const;
		
		~Fixed_point();

    private:
		int                 number_value;
		static const int    fractionnal;

};

std::ostream& operator<<(std::ostream& out, const Fixed_point& fixed);

#endif