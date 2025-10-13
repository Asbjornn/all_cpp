/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 09:48:35 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/13 15:02:00 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include "Colors.hpp"

class Harl {
    public:
        void complain (std::string level);

    private:
        void debug (void);
        void info (void);
        void warning (void);
        void error (void);
};

#endif