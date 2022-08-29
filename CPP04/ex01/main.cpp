/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 11:03:39 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *zoo[6];

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			zoo[i] = new Cat;
		else
			zoo[i] = new Dog;
		std::cout << i << "'s animal is a " << zoo[i]->getType() << std::endl;
		zoo[i]->makeSound();
		std::cout << "\n" << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		zoo[i]->getBrain().setIdea("eat");
		zoo[i]->getBrain().setIdea("poo");
		zoo[i]->getBrain().setIdea("sleep");
		std::cout << zoo[i]->getType() << ":" << std::endl;
		zoo[i]->getBrain().getIdeas();
	}

	Cat	*testCat = new Cat;

	testCat->getBrain().setIdea("attack");
	testCat->getBrain().setIdea("panik");
	std::cout << testCat->getType() << ":" << std::endl;
	testCat->getBrain().getIdeas();

	Cat	*copyCat(testCat);

	std::cout << copyCat->getType() << ":" << std::endl;
	copyCat->getBrain().getIdeas();

	Cat	*cpyCat = testCat;
	std::cout << cpyCat->getType() << ":" << std::endl;
	cpyCat->getBrain().getIdeas();

	for (int i = 0; i < 6; i++)
		delete zoo[i];
	delete cpyCat;
	return (0);
}
