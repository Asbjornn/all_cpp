/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:47:24 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 14:29:39 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include "easyfind.hpp"

int main(void) {
    std::vector<int> tab = {1, 2, 3, 4, 5};

    easyfind(tab, 3);
    easyfind(tab, 40);

	std::deque<int> deque = {10, 9, 8, 7, 6, 4, 2};

	easyfind(deque, 6);
    easyfind(deque, 3);
    return 0;
}