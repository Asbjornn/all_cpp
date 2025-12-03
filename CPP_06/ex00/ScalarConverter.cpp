/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:28:20 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/02 16:01:10 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
    (void)copy;
} ;

ScalarConverter&    ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    return *this;
};

ScalarConverter::~ScalarConverter() {};

static bool isChar(const std::string& input) {
    if (input.size() != 1)
        return false;
	if ((input[0] >= 'A' && 'Z' >= input[0]) || (input[0] >= 'a' && 'z' >= input[0]))
		return true;
	return false;
}

static bool isInt(const std::string& input) {
    int i = 0;
    int size = input.size();
    
    if (input[i] == '-' || input[i] == '+')
        i = 1;
        
    for (; i < size ; i++)
        if (!isdigit(input[i]))
            return false;
    return true;
}

static bool isFloat(const std::string& input) {
    if (input == "-inff" || input == "+inff" || input == "nanf")
        return true;
    try
    {
        size_t  pos;
        std::stod(input, &pos);
        return pos == input.size() - 1;
    }
    catch(...){
        return false;
    }
}

static bool isDouble(const std::string& input) {
    if (input == "nan" || input == "-inf" || input == "+inf")
        return true;
    try
    {
        size_t  pos;
        std::stod(input, &pos);
        return pos == input.size();
    }
    catch(...){
        return false;
    }
}

static char doChar(const std::string& input) {
    char    c = 0;
    
    if (input.size() == 1)
        return static_cast<char>(input[0]);
    c = atoi(input.c_str());
    if (!(c >= ' ' && c <= '~')) {
        std::cout << "non printable char";
        c = 0;
    }
    return c;
}

static int doInt(const std::string& input) {
    if (input.size() == 1)
        return static_cast<int>(input[0]);
    return std::stoi(input.c_str());
}

static float doFloat(const std::string& input) {
    if (input.size() == 1)
        return static_cast<float>(input[0]);
    return std::stof(input);
}

static double doDouble(const std::string& input) {
    if (input.size() == 1)
        return static_cast<double>(input[0]);
    return std::stod(input);
}

// cast en c++
// static_cast<type>();

void    ScalarConverter::convert(const std::string& input) {
    if (isChar(input))
    {
        std::cout << "Char input: " << input << std::endl;
        std::cout << "Int conversion: " << doInt(input) << std::endl;
        std::cout << "Float conversion: "  << std::fixed << std::setprecision(1) << doFloat(input) << "f" << std::endl;
        std::cout << "Double conversion: " << std::fixed << std::setprecision(1) << doDouble(input) << std::endl;
    }
    else if (isInt(input))
    {
        std::cout << "Char conversion: " << doChar(input) << std::endl;
        std::cout << "Int input: " << input << std::endl;
        std::cout << "Float conversion: "  << std::fixed << std::setprecision(1) << doFloat(input) << "f" << std::endl;
        std::cout << "Double conversion: " << std::fixed << std::setprecision(1) << doDouble(input) << std::endl;
    }
    else if (isFloat(input))
    {
        std::cout << "Char conversion: " << doChar(input) << std::endl;
        std::cout << "Int conversion: " << doInt(input) << std::endl;
        std::cout << "Float input: " << input << std::endl;
        std::cout << "Double conversion: " << std::fixed << std::setprecision(1) << doDouble(input) << std::endl;
    }
    else if (isDouble(input))
    {
        std::cout << "Char conversion: " << doChar(input) << std::endl;
        std::cout << "Int conversion: " << doInt(input) << std::endl;
        std::cout << "Float conversion: "  << std::fixed << std::setprecision(1) << doFloat(input) << "f" << std::endl;
        std::cout << "Double input: " << input << std::endl;
    }
    else
        std::cout << "Type is unknown !" << std::endl;
}
