/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:58:13 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/04 17:24:50 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stdexcept>
#include <string.h>
#include <stack>

class RPN {
	std::stack<int> stack;

	public:
		// --- Constructors & Destructors ---
		RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& other);
		~RPN();

		// --- Functions ---
		void	calcule(char *input);
		void	do_operation(char token);
};

#endif