/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:51:14 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/04 11:16:57 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    fufu() {
    
}

int main(void) {
    std::cout << "--- Array string ---\n";
    char    *s = "Bonjour";
    std::cout << "s before iter = " << s << std::endl;
    iter(s, 7, fufu());
    std::cout << "s after iter = " << s << std::endl;

    std::cout << "--- Array int ---\n";
    int     tab[5] = {1, 2, 3, 4, 5};
    std::cout << "tab before iter = " << tab << std::endl;
    iter(tab, 5, fufu());
    std::cout << "tab after iter = " << tab << std::endl;
    return 0;
}