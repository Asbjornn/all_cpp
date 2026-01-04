/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:37:26 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/04 17:43:18 by gcauchy          ###   ########.fr       */
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

    return 0;
}