/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:37:26 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/07 19:29:29 by gcauchy          ###   ########.fr       */
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
	
	clock_t time1 = clock();
	pmerge.solve_vector();
	clock_t time2 = clock();
	double elapsed = (double)(time2 - time1) * 1000000.0L / CLOCKS_PER_SEC;
	
	std::cout << "After  : ";
	pmerge.display(pmerge.get_vector());
	std::cout	<< "Merge insertion sort time with std::vector : ["
				<< std::fixed << std::setprecision(5) << elapsed 
				<< "] us" << std::endl;

	// deque
	std::cout << std::endl << "Before : ";
	pmerge.display(pmerge.get_deque());

	time1 = clock();
	pmerge.solve_deque();
	time2 = clock();
	elapsed = (double)(time2 - time1) * 1000000.0L / CLOCKS_PER_SEC;
	
	std::cout << "After  : ";
	pmerge.display(pmerge.get_deque());
	std::cout	<< "Merge insertion sort time with std::deque : ["
				<< std::fixed << std::setprecision(5) << elapsed 
				<< "] us" << std::endl;
	
	return 0;
}