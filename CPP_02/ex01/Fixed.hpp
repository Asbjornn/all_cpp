/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:17:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/30 14:00:19 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int value);				// Int constructor
		Fixed(const float value);				// Float constructor
		Fixed& operator=(const Fixed&);
		
		int     getRawBits(void) const;
		void    setRawBits(int const raw);
		int     toInt(void) const;
		float   toFloat(void) const;
		
		~Fixed();

    private:
		int                 number_value;
		static const int    fractionnal;

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif