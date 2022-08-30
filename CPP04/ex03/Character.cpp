/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/30 15:33:01 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unknown")
{
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
	std::cout << "Character copy constructor called" << std::endl;
	*this = cpy;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < _slot; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
	int i;

	i = 0;
	this->_name = rhs._name;
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
			std::cout << "equips " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx] && idx > 0 && idx < _slot)
	{
		this->_inventory[idx] = NULL;
		std::cout << "unequips " << _inventory[idx]->getType() << " from slot " << idx << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{	
	if (this->_inventory[idx] && idx > 0 && idx < _slot)
	{
		this->_inventory[idx]->use(target);
		return ;
	}
}
