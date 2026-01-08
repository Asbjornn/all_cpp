/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:44:56 by gcauchy           #+#    #+#             */
/*   Updated: 2026/01/08 10:06:51 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string.h>
#include <map>

class Btc {
    std::map<std::string, float> data;
    
    float    find_date(std::string date);
    
    public:
        // --- Constructors & Destructors ---
        Btc();
        Btc(const Btc& copy);
        Btc& operator=(const Btc& other);
        ~Btc();

        // --- Functions ---
        const std::map<std::string, float>& get_data() const;
        void    use_input(std::ifstream& in);
        
};

#endif