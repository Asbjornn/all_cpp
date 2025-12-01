/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:18:43 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 14:04:51 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void separator(std::string const &title) {
	std::cout << "\n========== " << title << " ==========\n";
}

int main() {
	separator("Creation and learn Materias");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice()); // devrait être ignoré (inventaire plein)

	separator("Character creation");
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	separator("Creation de Materias par la source");
	AMateria* ice = src->createMateria("ice");
	AMateria* cure = src->createMateria("cure");
	AMateria* unknown = src->createMateria("fire"); // devrait renvoyer NULL

	if (!unknown)
		std::cout << "unknow is : " << unknown << std::endl;

	separator("Equip Materias");
	me->equip(ice);
	me->equip(cure);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice")); // devrait échouer (inventaire plein)

	separator("Use Materias");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob); // index hors limites

	separator("Test unequip");
	me->unequip(1); // doit déséquiper cure
	me->use(1, *bob); // ne doit rien faire
	me->equip(src->createMateria("cure")); // on remet cure
	me->use(1, *bob);

	separator("Test deep copy");
	Character tmp("tmp");
	tmp.equip(src->createMateria("ice"));
	tmp.equip(src->createMateria("cure"));
	Character clone = tmp; // opérateur de copie

	std::cout << "\n--- Original use ---\n";
	tmp.use(0, *bob);
	tmp.use(1, *bob);

	std::cout << "\n--- Copy use ---\n";
	clone.use(0, *bob);
	clone.use(1, *bob);

	separator("All delete");
	delete me;
	delete bob;
	delete src;
	delete cure;

	return 0;
}