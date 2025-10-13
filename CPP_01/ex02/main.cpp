/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:10:08 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/13 14:34:14 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string s("HI THIS IS BRAIN");
    std::string* stringPTR = &s;
    std::string& stringREF = s;

    std::cout << "Memory adress :" << std::endl;
    std::cout << &s << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl << std::endl;
    
    std::cout << "Value of string :" << std::endl;
    std::cout << s << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}