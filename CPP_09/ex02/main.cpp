/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:37:26 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/12 16:19:16 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// have to use the merge-insert sort algorithm

static bool valid_input(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]))
			{
				std::cerr << "Problem detected with => " << argv[i][j] << std::endl;
				return false;
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

	try
	{
		pmerge.fill(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	// vector
	std::cout << "Before : ";
	pmerge.display(pmerge.get_vector());
	
	long long time1 = get_time();
	pmerge.solve_vector();
	long long time2 = get_time();
	double elapsed = (double)(time2 - time1);
	
	std::cout << "After  : ";
	pmerge.display(pmerge.get_vector());
	std::cout	<< "Merge insertion sort time with std::vector : ["
				<< std::fixed << std::setprecision(5) << elapsed 
				<< "] us" << std::endl;

	// deque
	std::cout << std::endl << "Before : ";
	pmerge.display(pmerge.get_deque());

	time1 = get_time();
	pmerge.solve_deque();
	time2 = get_time();
	elapsed = (double)(time2 - time1);

	
	std::cout << "After  : ";
	pmerge.display(pmerge.get_deque());
	std::cout	<< "Merge insertion sort time with std::deque : ["
				<< std::fixed << std::setprecision(5) << elapsed 
				<< "] us" << std::endl;
	
	return 0;
}