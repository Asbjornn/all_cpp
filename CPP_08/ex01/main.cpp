/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 09:36:33 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/08 10:56:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    Span sp = Span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << std::endl << "Shortest span : " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span : " << sp.longestSpan() << std::endl << std::endl;

	Span span = Span(10);
	srand(time(0));
	
	try
	{
		span.multipleNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (unsigned int i = 0; i < span.getSize(); i++)
	{
		try	
		{	
			std::cout << "Index " << i << ": " << span.peek(i) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl << "Shortest span : " << span.shortestSpan() << std::endl;
    std::cout << "Longest span : " << span.longestSpan() << std::endl;
	
    
    return 0;
}