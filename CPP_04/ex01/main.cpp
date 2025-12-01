/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:12:00 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 14:03:27 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "===== Subject test =====" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "\n===== Array of animals =====" << std::endl;

    const int size = 6;
    Animal* animals[size];

    for (int k = 0; k < size; ++k) {
        if (k < size / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << "\n===== Destructor Array of animals =====" << std::endl;

    for (int k = 0; k < size; ++k) {
        delete animals[k]; // Doit appeler les bons destructeurs (virtuel)
    }

    std::cout << "\n===== Deep copy test =====" << std::endl;

    Cat cat1;
    cat1.getBrain().setIdea("Eat some fish", 0);
    cat1.getBrain().setIdea("Sleep under the sun", 1);

    Cat cat2(cat1); // constructeur de copie

    std::cout << "Cat1 idea[0]: " << cat1.getBrain().getIdea(0) << std::endl;
    std::cout << "Cat2 idea[0]: " << cat2.getBrain().getIdea(0) << std::endl;

    // Modifions le cerveau du premier chat
    cat1.getBrain().setIdea("Climb a random tree", 0);

    std::cout << "Après modification :" << std::endl;
    std::cout << "Cat1 idea[0]: " << cat1.getBrain().getIdea(0) << std::endl;
    std::cout << "Cat2 idea[0]: " << cat2.getBrain().getIdea(0) << std::endl;
    std::cout << "Cat1 idea[110]: " << cat2.getBrain().getIdea(110) << std::endl;

    std::cout << "\n===== Assignment operator test =====" << std::endl;

    Dog dog1;
    dog1.getBrain().setIdea("Burry a bone", 0);

    Dog dog2;
    dog2 = dog1; // opérateur =

    std::cout << "Dog1 idea[0]: " << dog1.getBrain().getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain().getIdea(0) << std::endl;

    dog1.getBrain().setIdea("Run after a ball", 0);
    std::cout << "Après modification :" << std::endl;
    std::cout << "Dog1 idea[0]: " << dog1.getBrain().getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain().getIdea(0) << std::endl;

    std::cout << "\n===== END=====" << std::endl;
    return 0;
}