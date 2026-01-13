/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:35:30 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/13 12:12:42 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <sys/time.h>
#include <iomanip>
#include <algorithm>

class PmergeMe {
	std::vector<int>	_vector;
	std::deque<int>		_deque;

	public:
		// --- Constructors & Destructors ---
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		// --- Functions ---
		void	fill(int argc, char *argv[]);
			// --- Vector ---
		void	solve_vector();
		std::vector<int>	get_vector() const;
			// --- Deque ---
		void	solve_deque();
		std::deque<int>	get_deque() const;
		
		template <typename C>
		void	display(const C& container) {
			typename C::const_iterator it = container.begin();
			while (it != container.end())
			{
				std::cout << *it;
				it++;
				if (it != container.end())
					std::cout << " ";
			}
			std::cout << std::endl;
		}
};

#endif