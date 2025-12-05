/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:51:14 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/04 16:21:46 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    fufu(int a) {
    a++;
}

void    fofo(char a) {
    a--;
}

int main(void) {
    std::cout << "--- Array string ---\n";
    char   s[7] = "Bonjour";
    std::cout << "s before iter = " << s << std::endl;
    iter(s, 7, fofo);
    std::cout << "s after iter = " << s << std::endl;

    std::cout << "--- Array int ---\n";
    int     tab[5] = {1, 2, 3, 4, 5};
    std::cout << "tab before iter = " << tab << std::endl;
    iter(tab, 5, fufu);
    std::cout << "tab after iter = " << tab << std::endl;
    return 0;
}