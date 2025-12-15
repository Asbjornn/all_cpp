/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:24:13 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/15 13:15:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter& copy);
    ScalarConverter&operator=(const ScalarConverter& other);
    ~ScalarConverter();
    
    public:
        static void convert(const std::string& input);

};


#endif