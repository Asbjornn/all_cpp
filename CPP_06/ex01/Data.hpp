/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:11:59 by gcauchy           #+#    #+#             */
/*   Updated: 2025/12/02 17:33:01 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
    std::string _name;
    int         _age;
    
    public:
        Data();
        
        std::string getName() const;
        int         getAge() const;
        void        setName(char const *name);
        void        setAge(int const age);
};

#endif