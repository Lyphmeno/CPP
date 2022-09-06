/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:54:35 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/06 16:16:33 by hlevi            ###   ########.fr       */
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
	ICharacter *Cloud = new Character("Cloud");
	ICharacter *Sephiroth = new Character("Sephiroth");
	AMateria *tmp;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	
	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	Cloud->equip(tmp);
	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	Cloud->equip(tmp);
	tmp = src->createMateria("ice");
	std::cout << std::endl;
	Cloud->inventory();

	Cloud->use(0, *Sephiroth);
	Cloud->use(1, *Sephiroth);
	Cloud->use(2, *Sephiroth);
	Cloud->unequip(3);
	Cloud->unequip(1);
	Cloud->unequip(0);
	Cloud->equip(tmp);
	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	Cloud->inventory();
	Cloud->use(1, *Sephiroth);
	Cloud->use(2, *Sephiroth);
	Cloud->use(3, *Sephiroth);
	std::cout << std::endl;
	Sephiroth->inventory();

	delete Sephiroth;
	delete Cloud;
	delete src;
	return 0;
}