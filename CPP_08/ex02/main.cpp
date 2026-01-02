/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:21:14 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/02 14:30:48 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "--- Subject Test ---" << std::endl;
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Top element of mstack: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size of mstack: " << mstack.size() << std::endl << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    //[...]
    
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    std::cout << "Iteration over the mstack" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "--- Test with string MutantStack & const_iterator ---" << std::endl;
    MutantStack<std::string> smstack;
    
    smstack.push("Hello");
    smstack.push("World");
    smstack.push("!");

    std::cout << "Top element of smstack: " << smstack.top() << std::endl;
    std::cout << "Size of smstack: " << smstack.size() <<std::endl << std::endl;

    MutantStack<std::string>::const_iterator sit = smstack.begin();
    MutantStack<std::string>::const_iterator site = smstack.end();

    std::cout << "Iteration over the smstack" << std::endl;
    while (sit != site)
    {
        std::cout << *sit << std::endl;
        sit++;
    }

    std::cout << std::endl << "--- Comparison with std::list ---" << std::endl;
    std::list<int> list;

    list.push_back(5);
    list.push_back(17);
    
    std::cout << "Top element of list: " << list.front() << std::endl;
    list.pop_back();
    std::cout << "Size of list: " << list.size() << std::endl << std::endl;
    
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);

    std::cout << "Iteration over the list" << std::endl;
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << *it << std::endl;
    
    return 0;
}