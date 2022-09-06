/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:54:35 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/06 12:55:36 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter *Cloud = new Character("Cloud");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	std::cout << "tmp = " << tmp->getType() << " " << &tmp << std::endl;
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << "tmp = " << tmp->getType() << " " << &tmp << std::endl;
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << "tmp = " << tmp->getType() << " " << &tmp << std::endl;
	Cloud->equip(tmp);
	tmp = src->createMateria("ice");
	std::cout << "tmp = " << tmp->getType() << " " << &tmp << std::endl;
	Cloud->equip(tmp);
	// tmp = src->createMateria("cure");
	// std::cout << "tmp = " << tmp->getType() << " " << &tmp << std::endl;
	// Cloud->equip(tmp);
	std::cout << std::endl;
	Cloud->inventory();

	ICharacter *Sephiroth = new Character("Sephiroth");
	Cloud->use(0, *Sephiroth);
	Cloud->use(1, *Sephiroth);
	Cloud->use(2, *Sephiroth);
	Cloud->unequip(3);
	Cloud->unequip(1);
	Cloud->unequip(0);
	Cloud->inventory();
	Cloud->use(1, *Sephiroth);
	Cloud->use(2, *Sephiroth);
	Cloud->use(3, *Sephiroth);
	std::cout << std::endl;
	Sephiroth->inventory();

	delete tmp;
	delete src;
	delete Sephiroth;
	delete Cloud;
	return 0;
}