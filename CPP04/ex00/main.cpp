/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/26 16:15:11 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();
	const WrongAnimal *beta = new WrongAnimal();
	const WrongAnimal *k = new WrongCat();

	std::cout << "\n" << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << k->getType() << "\n" << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;

	beta->makeSound();
	k->makeSound();
	std::cout << std::endl;

	delete(meta);
	delete(i);
	delete(j);
	delete(beta);
	delete(k);
	return (0);
}
