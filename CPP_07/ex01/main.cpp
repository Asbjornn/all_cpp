/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:51:14 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 10:30:25 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    increase(int &a) {
    a += 1;
}

void    decrease(char &a) {
    a -= 1;
}

int main(void) {
    std::cout << "--- Array string ---\n";
    char   s[] = "Bonjour";
    std::cout << "s before iter = " << s << std::endl;
    iter(s, 7, decrease);
    std::cout << "s after iter = " << s << std::endl;

    std::cout << "--- Array int ---\n";
    int     tab[5] = {1, 2, 3, 4, 5};
    std::cout << "tab before iter : " << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
    iter(tab, 5, increase);
    std::cout << "tab after iter : " << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
    return 0;
}