/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:37:26 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/15 12:52:56 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// have to use the merge-insert sort algorithm

static bool valid_input(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++)
	{
		char *end;
		long value = std::strtol(argv[i], &end, 10);
		if (value > INT_MAX || value <= 0 || *end != '\0') {	
			std::cerr << "Problem detected with => " << argv[i] << std::endl;
			return false;
		}
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = i + 1; j < argc; j++)
		{
			if (std::atoi(argv[i]) == std::atoi(argv[j])) {
				std::cerr << "Problem detected with => duplicates " << argv[i] << " at index [" << i << ":" << j << "]" << std::endl;
				return false;
			}
		}
		
	}
	
	return true;
}

static long long get_time() {
	struct timeval t;
	
	gettimeofday(&t, NULL);
	return t.tv_sec * 1000000 + t.tv_usec;
}

int main(int argc, char *argv[]) {
	if (argc == 1)
	{
		std::cerr << "Program need arguments" << std::endl;
		return 1;
	}
	if (!valid_input(argc, argv))
		return 1;

	PmergeMe pmerge;
	
	// vector
	std::cout << "Before: ";
	for (int i = 1; i < argc; i++) {
		std::cout << argv[i];
		if (i + 1 < argc)
			std::cout << " ";	
	}
	std::cout << std::endl;
	
	
	long long time1 = get_time();
	pmerge.fill_vector(argc, argv);
	pmerge.solve_vector();
	long long time2 = get_time();
	double elapsed = (double)(time2 - time1);
	
	std::cout << "After:  ";
	pmerge.display(pmerge.get_vector());
	std::cout	<< "Time to process a range of " << argc - 1 << " elements with std::vector : "
				<< elapsed << " us" << std::endl;

	// deque
	std::cout << std::endl << "Before: ";
	for (int i = 1; i < argc; i++) {
		std::cout << argv[i];
		if (i + 1 < argc)
			std::cout << " ";	
	}
	std::cout << std::endl;

	time1 = get_time();
	pmerge.fill_deque(argc, argv);
	pmerge.solve_deque();
	time2 = get_time();
	elapsed = (double)(time2 - time1);

	
	std::cout << "After:  ";
	pmerge.display(pmerge.get_deque());
	std::cout	<< "Time to process a range of " << argc - 1 << " elements with std::deque : "
				<< elapsed << " us" << std::endl;
	
	return 0;
}