/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:35:21 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/04 17:44:25 by gcauchy          ###   ########.fr       */
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