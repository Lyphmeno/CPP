/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:54:35 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 16:05:05 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource	*src = new MateriaSource();
	AMateria	*tmp;
	tmp = new Ice();
	src->learnMateria(tmp);
	src->learnMateria(tmp);
	delete tmp;
	tmp = new Cure();
	src->learnMateria(tmp);
	src->learnMateria(tmp);
	src->learnMateria(tmp);
	delete tmp;
	tmp = NULL;

	IMateriaSource	*srcCpy = new MateriaSource(*(reinterpret_cast<MateriaSource *>(src)));
	tmp = srcCpy->createMateria("cure");
	delete tmp;
	delete srcCpy;

	Character	*me = new Character("me");
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;

	Character	*bob = new Character("bob");
	me->use(-1, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	Character	*cpy = new Character (*me);
	cpy->use(-1, *bob);
	cpy->use(0, *bob);
	cpy->use(1, *bob);
	cpy->use(2, *bob);
	cpy->use(3, *bob);
	cpy->use(4, *bob);

	*cpy = *bob;
	cpy->use(-1, *bob);
	cpy->use(0, *bob);
	cpy->use(1, *bob);
	cpy->use(2, *bob);
	cpy->use(3, *bob);
	cpy->use(4, *bob);
	delete cpy;
	delete bob;
	delete me;
	delete src;
	return (0);
}