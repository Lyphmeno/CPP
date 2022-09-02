/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:21:43 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/02 13:26:49 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	if (LOG == 1)
		std::cout << "MateriaSource default constructor called" << std::endl;
	int i;

	i = 0;
	while (i < _slot)
	{
		this->_inventory[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	if (LOG == 1)
		std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = cpy;
}

MateriaSource::~MateriaSource()
{
	if (LOG == 1)
		std::cout << "MateriaSource destructor called" << std::endl;
	int i;

	i = 0;
	while (i < _slot)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		i++;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	int i;

	i = 0;
	if (this != &rhs)
	{
		while (i < _slot)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
			i++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	int i;

	i = 0;
	while (i < _slot)
	{
		if (this->_inventory[i] == NULL)
		{
			std::cout << "learning " << materia->getType() << std::endl;
			this->_inventory[i] = materia;
			return;
		}
		i++;
	}
	delete (materia);
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _slot; i++)
	{
		if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
		{
			std::cout << "creating " << type << std::endl;
			return (this->_inventory[i]->clone());
		}
	}
	return (NULL);
}