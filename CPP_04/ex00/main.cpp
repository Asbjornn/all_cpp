/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:12:00 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/05 11:20:41 by gcauchy          ###   ########.fr       */
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
	std::cout << "===== Constructor =====" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << std::endl << "===== fonction getType() =====" << std::endl;
	std::cout << "Dog type is : " << dog->getType() << " " << std::endl;
	std::cout << "Cat type is : " << cat->getType() << " " << std::endl;
	
	std::cout << std::endl << "===== fonction makeSound() =====" << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	std::cout << std::endl << "===== Destructor =====" << std::endl;
	delete meta;
	delete dog;
	delete cat;
	
	std::cout << std::endl << "===== Wrong animal test =====" << std::endl;
	std::cout << "===== Constructor =====" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << std::endl << "===== fonction getType() =====" << std::endl;
	std::cout << "WrongCat type is : " << wrongCat->getType() << " " << std::endl;
	
	std::cout << std::endl << "===== fonction makeSound() =====" << std::endl;
	wrongCat->makeSound(); //will not output the cat sound!
	wrongMeta->makeSound();

	std::cout << std::endl << "===== Destructor =====" << std::endl;
	delete wrongMeta;
	delete wrongCat;
	return 0;
}