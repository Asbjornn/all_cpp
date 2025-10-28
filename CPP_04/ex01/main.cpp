/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:12:00 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 17:58:15 by gcauchy          ###   ########.fr       */
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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	
	delete j;//should not create a leak
	delete i;

	std::cout << "===== Other test =====" << std::endl;
	const	Animal*	meute = new Animal[6];
	
	for (int i = 0; i < 6; i++)
	{
		if ((i % 2) == 0)
			meute[i] = Dog();
		else
			meute[i] = Cat();
	}
	
	return 0;
}