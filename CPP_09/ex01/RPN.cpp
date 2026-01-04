/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:59:15 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/04 17:34:05 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// --- Constructors & Destructors ---

RPN::RPN() {}

RPN::RPN(const RPN& copy) {
	this->stack = copy.stack;
}

RPN& RPN::operator=(const RPN& other) {
	if (this != &other)
		this->stack = other.stack;
	return *this;
}

RPN::~RPN() {}

// --- Functions ---

static bool is_token(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

void	RPN::do_operation(char token) {
	int first = 0, second = 0, result = 0;

	second = stack.top();
	stack.pop();
	first = stack.top();
	stack.pop();

	// std::cout << "first: " << first << std::endl << "second: " << second << std::endl;
	switch (token)
	{
		case '+':
			result = first + second;
			break;
		case '-':
			result = first - second;
			break;
		case '*':
			result = first * second;
			break;
		case '/':
			if (second == 0)
				throw std::runtime_error("Division by 0 detected, end of program ..");
			result = first / second;
			break;
		default:
			break;
	}
	// std::cout << "result: " << result << std::endl << std::endl;
	stack.push(result);
}

void	RPN::calcule(char *input) {
	for (int i = 0; input[i]; i++)
	{
		if (input[i] == ' ')
			continue;

		if (is_token(input[i]))
		{
			if (stack.size() < 2)
			{
				std::cerr << "Invalid format of input" << std::endl;
				return ;
			}
			
			try {
				do_operation(input[i]);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				while (!stack.empty())
					stack.pop();
				return ;
			}
			
		}
		else
			stack.push(input[i] - '0');
	}
	
	if (stack.size() > 1)
		std::cerr << "The stack contains more than 1 number, not enough token" << std::endl;
	else
		std::cout << stack.top() << std::endl;
}