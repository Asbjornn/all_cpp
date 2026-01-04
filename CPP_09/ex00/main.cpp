/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:44:38 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/04 16:10:57 by gcauchy          ###   ########.fr       */
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

	// for (std::map<std::string, float>::const_iterator it = btc.get_data().begin(); it != btc.get_data().end(); it++)
	// {
	// 	std::cout << it->first << ":" << it->second << std::endl;
	// }
	
	in.close();
	return 0;
}