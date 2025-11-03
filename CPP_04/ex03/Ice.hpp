/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:03:16 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 09:41:15 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
    protected:
        
    public:
        Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& other);
        ~Ice();

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif