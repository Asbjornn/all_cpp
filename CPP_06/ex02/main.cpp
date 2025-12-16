/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:57:16 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 10:13:20 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
    int n = rand() % 3;

    switch (n)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        std::cout << "Problem with generation" << std::endl;
        return nullptr;
    }
}

void    identify(Base* p) {
    if (!p)
    {
        std::cout << "Base is null" << std::endl;
        return ;
    }
    if (dynamic_cast<A*>(p))
        std::cout << "Class is type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Class is type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Class is type C" << std::endl;
    else
        std::cout << "Type is not known" << std::endl;
}

void    identify(Base& p) {
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Class is type A" << std::endl;
        return ;
    }
    catch(...) {}
    
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Class is type B" << std::endl;
        return ;
    }
    catch(...) {}
    
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Class is type C" << std::endl;
        return ;
    }
    catch(...) {}

    std::cout << "Type is not known" << std::endl;
}

int main(void) {
    srand(time(0));
    
    Base* base = generate();
    identify(base);
    identify(*base);
    delete base;

    return 0;
}