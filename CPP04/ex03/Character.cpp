/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 15:52:04 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Unknown")
{
	std::cout << "Character default constructor called" << std::endl;
	int i;

	i = 0;
	while (i < maxSlot)
	{
		this->inventory[i] = NULL;
		i++;
	}
}

Character::Character(std::string newName) : _name(newName)
{
	std::cout << "Character assignation constructor called" << std::endl;
	int i;

	i = 0;
	while (i < maxSlot)
	{
		this->inventory[i] = NULL;
		i++;
	}
}

Character::Character(const Character &cpy) : _name(cpy._name)
{
	std::cout << "Character copy constructor called" << std::endl;
	int i;

	i = 0;
	while (i < maxSlot)
	{
		this->inventory[i] = cpy.inventory[i] ? cpy.inventory[i]->clone() : NULL;
		i++;
	}
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	delete[] *this->inventory;
}

Character &Character::operator=(const Character &rhs)
{
	int i;

	i = 0;
	while (i < maxSlot)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i] ? rhs.inventory[i]->clone() : NULL;
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
	while (i < maxSlot)
	{
		if (this->inventory[i] == NULL)
			this->inventory[i] = m;
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (this->inventory[idx] && idx > 0 && idx < maxSlot)
		this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{	
	if (this->inventory[idx] && idx > 0 && idx < maxSlot)
		this->inventory[idx]->use(target);
}
