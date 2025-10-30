/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:47:39 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/30 14:02:57 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	
	{
		std::cout << "=== TEST SUBJECT ===" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	
    std::cout << std::endl << "=== TEST CONSTRUCTEURS ===" << std::endl;
    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d (copie de b) = " << d << std::endl;

    std::cout << "\n=== TEST OPERATEUR D’AFFECTATION ===" << std::endl;
    a = Fixed(1234.4321f);
    std::cout << "a = " << a << std::endl;

    std::cout << "\n=== TEST CONVERSION ===" << std::endl;
    std::cout << "a en int = " << a.toInt() << std::endl;
    std::cout << "a en float = " << a.toFloat() << std::endl;

    std::cout << "\n=== TEST OPERATEURS ARITHMETIQUES ===" << std::endl;
    Fixed e = b + c;
    Fixed f = c - b;
    Fixed g = b * c;
    Fixed h = c / b;
    std::cout << "b + c = " << e << std::endl;
    std::cout << "c - b = " << f << std::endl;
    std::cout << "b * c = " << g << std::endl;
    std::cout << "c / b = " << h << std::endl;

    std::cout << "\n=== TEST OPERATEURS DE COMPARAISON ===" << std::endl;
    std::cout << "b < c : " << (b < c) << std::endl;
    std::cout << "b > c : " << (b > c) << std::endl;
    std::cout << "b == d : " << (b == d) << std::endl;
    std::cout << "b != c : " << (b != c) << std::endl;

    std::cout << "\n=== TEST INCREMENTATION / DECREMENTATION ===" << std::endl;
    Fixed x;
    std::cout << "x = " << x << std::endl;
    std::cout << "++x = " << ++x << std::endl;
    std::cout << "x++ = " << x++ << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "--x = " << --x << std::endl;
    std::cout << "x-- = " << x-- << std::endl;
    std::cout << "x = " << x << std::endl;

    std::cout << "\n=== TEST MIN / MAX ===" << std::endl;
    Fixed& minVal = Fixed::min(b, c);
    Fixed& maxVal = Fixed::max(b, c);
    std::cout << "min(b, c) = " << minVal << std::endl;
    std::cout << "max(b, c) = " << maxVal << std::endl;

    std::cout << "\n=== FIN DES TESTS ===" << std::endl;
    return 0;
}