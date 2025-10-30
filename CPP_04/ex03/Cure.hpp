/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:03:44 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/28 17:25:44 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
    protected:
        
    public:
        Cure(std::string const & type);
        Cure(const Cure& copy);
        Cure& operator=(const Cure& other);
        ~Cure();

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif