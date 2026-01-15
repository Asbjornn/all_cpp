/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:35:30 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/15 12:42:16 by gcauchy          ###   ########.fr       */
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
#include <limits.h>

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
		// --- Vector ---
		void				fill_vector(int argc, char *argv[]);
		void				solve_vector();
		std::vector<int>	get_vector() const;
			// --- Deque ---
		void			fill_deque(int argc, char *argv[]);
		void			solve_deque();
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