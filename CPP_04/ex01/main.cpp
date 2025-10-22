/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:12:00 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/21 17:26:33 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "===== Subject test =====" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;
	
	std::cout << std::endl << "===== Wrong animal test =====" << std::endl;;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << wrongCat->getType() << " " << std::endl;
	
	wrongCat->makeSound(); //will not output the cat sound!
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;
	return 0;
}