/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:44:38 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/13 10:32:07 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cerr << "Format: ./btc 'file'" <<std::endl;
		return 1;
	}
	
	std::ifstream in(argv[1]);
	if (!in.is_open())
	{
		std::cerr << "File " << argv[1] << " failed to open" << std::endl;
		return 1;
	}

	try {
		Btc btc;
		btc.use_input(in);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	in.close();
	return 0;
}