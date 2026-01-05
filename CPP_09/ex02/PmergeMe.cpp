/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:35:21 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/05 14:13:10 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// --- Constructors & Destructors ---

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy) {
	(void)copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	// if (this != &other)
        //bla bla
    (void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

// --- Functions ---

void	PmergeMe::fill(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		try
		{
			std::string n = argv[i];
			this->_vector.push_back(std::stoi(n));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return ;
		}
		
	}
}

void	PmergeMe::display_vector() {
	for (unsigned long i = 0; i < _vector.size(); i++)
	{
		std::cout << _vector[i];
		if (i + 1 != _vector.size())
			std::cout << " ";
	}
	std::cout << std::endl;
}