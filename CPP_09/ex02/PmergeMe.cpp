/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:35:21 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/13 16:13:29 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// --- Constructors & Destructors ---

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy) {
	this->_vector = copy._vector;
	this->_deque = copy._deque;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		this->_vector = other._vector;
		this->_deque = other._deque;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

// --- Functions ---

void	PmergeMe::fill(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		try
		{
			std::string n = argv[i];
			// add numbers in the vector and deque
			this->_vector.push_back(std::stoi(n));
			this->_deque.push_back(std::stoi(n));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return ;
		}
	}
}


// === Vector algo ===
static std::vector<int> jacob_sequence_vector(int size) {
	std::vector<int> jacob;
	jacob.push_back(1);
	jacob.push_back(3);

	while (jacob.back() < size) {
		jacob.push_back(jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2]);
	}
	return jacob;
}

static std::vector<int> order_vector(int size) {
	std::vector<int> jacob = jacob_sequence_vector(size);
	std::vector<int> order;
	int prev = 0;

	for (size_t i = 0; i < jacob.size(); i++) {
		int	current = std::min(jacob[i], size);
		for (int j = current - 1; j >= prev; j--)
			order.push_back(j);
		prev = current;
	}
	return order;
}

static std::vector<int>	recursive(std::vector<int> v) {
	if (v.size() <= 1)
		return v;

	std::vector<std::pair<int, int> > pairs;
	
	// Make pair with every numbers
	for (unsigned long i = 0, index = 0; i < v.size() / 2; i++, index += 2) {
		pairs.push_back(std::make_pair(v[index], v[index + 1]));
	}

	// We want the first to be the biggest
	for (unsigned long i = 0; i < pairs.size(); i++) {
		if (pairs[i].first < pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
	
	// Two new vector to separate big and small value of pairs
	std::vector<int> big;
	std::vector<int> small;
	
	
	// Push everything in both vectors
	for (unsigned long i = 0; i < pairs.size(); i++) {
		big.push_back(pairs[i].first);
		small.push_back(pairs[i].second);
	}
	
	// When odd numbers we push in big to have even numbers in big
	if (v.size() % 2 != 0)
		big.push_back(v.back());

	// Recursive call on big
	big = recursive(big);

	// Insert all the small in big
	std::vector<int> order = order_vector(small.size());
	for (size_t i = 0; i < order.size(); i++) {
		int val = small[order[i]];
		std::vector<int>::iterator pos = std::lower_bound(big.begin(), big.end(), val);
		big.insert(pos, val);
	}
	return big;
}

void	PmergeMe::solve_vector() {
	unsigned long size = this->_vector.size();
	int alone = 0;
	bool hasAlone = false;
	
	if (size % 2 != 0)
	{
		// Odd size so we take out the last one to insert at the end
		alone = _vector.back();
		_vector.pop_back();
		hasAlone = true;
	}

	// Recursive call to algo
	_vector = recursive(_vector);
	
	// If initial list was odd, insert the last one previously removed
	if (hasAlone)
	{
		std::vector<int>::iterator pos = std::lower_bound(_vector.begin(), _vector.end(), alone);
		_vector.insert(pos, alone);
	}
}

std::vector<int>	PmergeMe::get_vector() const {
	return this->_vector;
}

// === Deque algo ===
static std::deque<int> jacob_sequence_deque(int size) {
	std::deque<int> jacob;
	jacob.push_back(1);
	jacob.push_back(3);

	while (jacob.back() < size) {
		jacob.push_back(jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2]);
	}
	return jacob;
}

static std::deque<int> order_deque(int size) {
	std::deque<int> jacob = jacob_sequence_deque(size);
	std::deque<int> order;
	int prev = 0;

	for (size_t i = 0; i < jacob.size(); i++) {
		int	current = std::min(jacob[i], size);
		for (int j = current - 1; j >= prev; j--)
			order.push_back(j);
		prev = current;
	}
	return order;
}

static std::deque<int>	recursive(std::deque<int> d) {
	if (d.size() <= 1)
		return d;

	std::vector<std::pair<int, int> > pairs;
	
	// Make pair with every numbers
	for (unsigned long i = 0, index = 0; i < d.size() / 2; i++, index += 2) {
		pairs.push_back(std::make_pair(d[index], d[index + 1]));
	}

	// We want the first to be the biggest
	for (unsigned long i = 0; i < pairs.size(); i++) {
		if (pairs[i].first < pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
	
	// Two new vector to separate big and small value of pairs
	std::deque<int> big;
	std::deque<int> small;
	
	// Push everything in both vectors
	for (unsigned long i = 0; i < pairs.size(); i++) {
		big.push_back(pairs[i].first);
		small.push_back(pairs[i].second);
	}

	// When odd numbers we push in big to have even numbers in big
	if (d.size() % 2 != 0)
		big.push_back(d.back());

	// Recursive call on big
	big = recursive(big);

	// Insert all the small in big
	std::deque<int> order = order_deque(small.size());
	for (size_t i = 0; i < order.size(); i++) {
		int val = small[order[i]];
		std::deque<int>::iterator pos = std::lower_bound(big.begin(), big.end(), val);
		big.insert(pos, val);
	}	
	return big;
}

void	PmergeMe::solve_deque() {
	unsigned long size = this->_deque.size();
	int alone = 0;
	bool hasAlone = false;
	
	if (size % 2 != 0)
	{
		// Odd size so we take out the last one to insert at the end
		alone = _deque.back();
		_deque.pop_back();
		hasAlone = true;
	}

	// Recursive call to algo
	_deque = recursive(_deque);
	
	// If initial list was odd, insert the last one previously removed
	if (hasAlone) {
		std::deque<int>::iterator pos = std::lower_bound(_deque.begin(), _deque.end(), alone);
		_deque.insert(pos, alone);
	}
}

std::deque<int>	PmergeMe::get_deque() const {
	return this->_deque;
}