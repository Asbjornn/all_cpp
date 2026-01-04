/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:59:46 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/04 17:22:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool is_token(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

static int valid_format(char *input) {
	for (int i = 0; input[i]; i++)
	{
		if (isdigit(input[i]) && isdigit(input[i + 1]))
		{
			std::cerr << "Numbers can only be less than 10" << std::endl;
			return 0;
		}
		if (!isdigit(input[i]) && !is_token(input[i]) && input[i] != ' ')
		{
			std::cerr << "Invalid token detected => " << input[i] << std::endl;
			return 0;
		}
	}
	return 1;
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Format: ./RPN \"1 1 +\"" << std::endl;
		return 1;
	}

	if (!valid_format(argv[1]))  
		return 1;

	RPN rpn;

	rpn.calcule(argv[1]);
	return 0;
}