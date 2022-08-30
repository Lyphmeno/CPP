/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:21:43 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/30 15:30:01 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
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
	std::cout << "MateriaSource copy constructor called" << std::endl;
	int i;

	i = 0;
	while (i < _slot)
	{
		_inventory[i] = (cpy._inventory[i]) ? cpy._inventory[i]->clone() : NULL;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
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
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	int i;

	i = 0;
	while (i < _slot)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = materia;
			return;
		}
		i++;
	}
	delete (materia);
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	int i;

	i = 0;
	while (i < _slot)
	{
		if (this->_inventory[i]->getType() == type && _inventory[i] != NULL)
			return (this->_inventory[i]->clone());
		i++;
	}
	return (NULL);
}