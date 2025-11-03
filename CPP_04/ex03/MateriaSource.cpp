/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:58:55 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 10:18:21 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    std::cout << "MateriaSource copy creator called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    std::cout << "MateriaSource copy assignment operator called" << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource destructor called" << std::endl;
}

void    MateriaSource::learnMateria(AMateria*) {
    
}

AMateria*   MateriaSource::createMateria(std::string const & type) {
    if (type == "ice")
        return new Ice();
    else if (type == "cure")
        return new Cure();
    else
    {
        std::cout << "This type is unknown" << std::endl;
        return 0;
    }
}
