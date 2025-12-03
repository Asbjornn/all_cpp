/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:17:14 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/02 17:33:23 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
    Data ptr;
    ptr.setName("AOUUUU");
    ptr.setAge(99);
    uintptr_t raw =  Serializer::serialize(&ptr);
    std::cout << raw << std::endl;
    Data* pt = Serializer::deserialize(raw);
    std::cout << "Age after deserializatoin: " << pt->getAge() << std::endl;
    std::cout << "Name after deserializatoin: " << pt->getName() << std::endl;
    return 0;
}