/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:30:48 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/04 09:50:28 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
    std::cout << "--- Int test ---" << std::endl;
    int a = 2;
    int b = 8;
    swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;
    std::cout << "min(a, b) = " << min(a, b) << std::endl;
    std::cout << "max(a, b) = " << max(a, b) << std::endl << std::endl;;
    
    std::cout << "--- String test ---" << std::endl;
    std::string c = "Chaine 1";
    std::string d = "Chaine 2";
    swap(c, d);
    std::cout << "c = " << c << " d = " << d << std::endl;
    std::cout << "min(c, d) = " << min(c, d) << std::endl;
    std::cout << "max(c, d) = " << max(c, d) << std::endl << std::endl;

    std::cout << "--- Char test ---" << std::endl;
    char e = 'z';
    char f = 'a';
    swap(e, f);
    std::cout << "e = " << e << " f = " << f << std::endl;
    std::cout << "min(e, f) = " << min(e, f) << std::endl;
    std::cout << "max(e, f) = " << max(e, f) << std::endl << std::endl;
    
    return 0;
}