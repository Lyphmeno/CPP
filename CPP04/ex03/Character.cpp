/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/02 14:21:49 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unknown")
{
	if (LOG == 1)
		std::cout << "Character default constructor called" << std::endl;
	int i;

	i = 0;
	while (i < _slot)
	{
		this->_inventory[i] = NULL;
		i++;
	}
}

Character::Character(std::string newName) : _name(newName)
{
	if (LOG == 1)
		std::cout << "Character assignation constructor called" << std::endl;
	int i;

	i = 0;
	while (i < _slot)
	{
		this->_inventory[i] = NULL;
		i++;
	}
}

Character::Character(const Character &cpy)
{
	if (LOG == 1)
		std::cout << "Character copy constructor called" << std::endl;
	*this = cpy;
}

Character::~Character()
{
	if (LOG == 1)
		std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < _slot; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < _slot; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while (i < _slot)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equips -" << m->getType() << "- in slot " << i << std::endl;
			return ;
		}
		i++;
	}
	std::cout << this->_name << " doesn't have any slot left -" << m->getType() << " materia- is fading" << std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < _slot)
	{
		std::cout << this->_name << " unequips -" << _inventory[idx]->getType() << "- from slot " << idx << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx] && idx >= 0 && idx < _slot)
	{
		this->_inventory[idx]->use(target);
		return ;
	}
	std::cout << "no materia in this slot" << std::endl;
}

void	Character::inventory(void) const
{
	std::cout << "-----------------------" << std::endl;
	std::cout << "\t" << this->getName() << std::endl;
	for (int i = 0; i < _slot; i++)
	{
		std::cout << " [" << i << "] ";
		if (_inventory[i])
			std::cout << _inventory[i]->getType();
		std::cout << std::endl;
	}
	std::cout << "-----------------------" << std::endl;
	std::cout << std::endl;
}
