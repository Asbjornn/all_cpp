/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:17:14 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/16 10:09:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
    Data ptr("Bob", 99);
    
    uintptr_t raw = Serializer::serialize(&ptr);
    std::cout << "raw value: " << raw << std::endl << std::endl;
    
    Data* pt = Serializer::deserialize(raw);
    if (pt == &ptr)
        std::cout << "EQUAL !" << std::endl;
    else
        std::cout << "not equal ..." << std::endl;
    std::cout << "Age after deserializatoin: " << pt->getAge() << std::endl;
    std::cout << "Name after deserializatoin: " << pt->getName() << std::endl;
    return 0;
}