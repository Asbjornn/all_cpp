/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:58:55 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 13:16:36 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    // std::cout << "MateriaSource constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    // std::cout << "MateriaSource copy creator called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (copy.materias[i])
			materias[i] = copy.materias[i]->clone();
		else
			materias[i] = 0;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    // std::cout << "MateriaSource copy assignment operator called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (other.materias[i])
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = 0;
	}

	return *this;
}

MateriaSource::~MateriaSource() {
    // std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete materias[i];
	
}

void    MateriaSource::learnMateria(AMateria* m) {
    for (size_t i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = m;
			std::cout << "MateriaSource learned materia : " << materias[i]->GetType() << std::endl;
			return ;
		}
	}
	std::cout << "Already reached 4 materias in inventory" << std::endl;
	delete m;
}

AMateria*   MateriaSource::createMateria(std::string const & type) {
    for (size_t i = 0; i < 4; i++)
	{
		if (materias[i]->GetType() == type)
		{
			std::cout << "Materia " << materias[i]->GetType() << " is created" <<  std::endl;
			return materias[i]->clone();
		}
	}
	std::cout << "This type is unknown" << std::endl;
	return 0;
}
