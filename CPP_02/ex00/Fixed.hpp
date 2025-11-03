/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:17:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/30 14:00:54 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    public:
    	Fixed();
    	Fixed(const Fixed& copy);
    	Fixed& operator=(const Fixed&);
    	~Fixed();
	
    	int    getRawBits(void) const;
    	void    setRawBits(int const raw);

    private:
    	int                 number_value;
    	static const int    fractionnal;
};	

#endif