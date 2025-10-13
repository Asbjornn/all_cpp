/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:17:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/09/24 09:36:35 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed_point {
    public:
    Fixed_point();
    Fixed_point(const Fixed_point& copy);
    Fixed_point(const int value);
    Fixed_point(const float value);
    
    Fixed_point& operator=(const Fixed_point&);
    std::ostream& operator<<(std::ostream& out, const Fixed_point& fixed)   ; 
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    int     toInt(void) const;
    float   toFloat(void) const;
    
    ~Fixed_point();

    private:
    int                 number_value;
    static const int    fractionnal;
};

#endif