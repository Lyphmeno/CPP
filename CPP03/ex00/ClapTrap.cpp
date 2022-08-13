/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:23:40 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/13 10:54:04 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Cl4p-Tp"),_hp(10),_ep(10),_ad(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName):_name(newName),_hp(10),_ep(10),_ad(0)
{
	std::cout << "ClapTrap assignation constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;  
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called" << std::endl;  
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hp = rhs.getHp();
	this->_ep = rhs.getEp();
	this->_ad = rhs.getAd();
	return (*this);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int	ClapTrap::getHp() const
{
	return (this->_hp);
}

int	ClapTrap::getEp() const
{
	return (this->_ep);
}

int	ClapTrap::getAd() const
{
	return (this->_ad);
}

void	ClapTrap::setName(std::string newName)
{
	this->_name = newName;
}

void	ClapTrap::setHp(int newHp)
{
	this->_hp = newHp;
}

void	ClapTrap::setEp(int newEp)
{
	this->_ep = newEp;
}

void	ClapTrap::setAd(int newAd)
{
	this->_ad = newAd;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_ad << " points of damages !" << std::endl;
		this->_ep--;
	}
	else
		std::cout << this->_name << " is either dead or out of energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " points of damages" << std::endl;
	this->_hp -= amount;
	if (this->_hp <= 0)
		std::cout << this->_name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0 && this->_hp > 0 && this->_hp < 10)
	{
		std::cout << this->_name << " is healing " << amount
			<< " of HP" << std::endl;
		this->_hp += amount;
		if (this->_hp > 10)
			this->_hp = 10;
		this->_ep--;
	}
	else if (this->_hp >= 10)
		std::cout << this->_name << " is allready full HP" << std::endl;
	else
		std::cout << this->_name << " is either dead or out of energy" << std::endl;
}
