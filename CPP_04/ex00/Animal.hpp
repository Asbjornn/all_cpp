/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:54:03 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 16:10:38 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& other);
		~Animal();
		virtual void	makeSound(void);


	protected:
		std::string type;
};

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		~Dog();
		void	makeSound(void);
};

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		~Cat();
		void	makeSound(void);
};

#endif