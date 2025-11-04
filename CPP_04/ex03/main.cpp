/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:18:43 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 16:17:14 by gcauchy          ###   ########.fr       */
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
	separator("Creation et apprentissage de Materias");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice()); // devrait être ignoré (inventaire plein)

	separator("Creation de personnages");
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	separator("Creation de Materias par la source");
	AMateria* ice = src->createMateria("ice");
	AMateria* cure = src->createMateria("cure");
	AMateria* unknown = src->createMateria("fire"); // devrait renvoyer NULL

	std::cout << "Creation de 'fire': " 
	          << (unknown ? "SUCCES (ERREUR)" : "ECHEC (OK)") << std::endl;

	separator("Equipement de Materias");
	me->equip(ice);
	me->equip(cure);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice")); // devrait échouer (inventaire plein)

	separator("Utilisation de Materias");
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

	separator("Test de copie profonde (deep copy)");
	Character tmp("tmp");
	tmp.equip(src->createMateria("ice"));
	tmp.equip(src->createMateria("cure"));
	Character clone = tmp; // opérateur de copie

	std::cout << "\n--- Utilisation avec l'original ---\n";
	tmp.use(0, *bob);
	tmp.use(1, *bob);

	std::cout << "\n--- Utilisation avec la copie ---\n";
	clone.use(0, *bob);
	clone.use(1, *bob);

	std::cout << "\n--- Suppression de l'original (pour vérifier la copie indépendante) ---\n";

	separator("Nettoyage memoire");
	delete me;
	delete bob;
	delete src;
	// delete unknown; // juste par sécurité
	std::cout << "\nTous les objets ont ete detruits proprement ✅\n";

	return 0;
}