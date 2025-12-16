/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:47:24 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 11:21:59 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int main(void) {
    std::vector<int> tab;
    tab.push_back(1);
    tab.push_back(2);
    tab.push_back(3);
    tab.push_back(4);
    tab.push_back(5);

    easyfind(tab, 3);
    easyfind(tab, 40);
    return 0;
}