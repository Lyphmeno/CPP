/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:25:09 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/26 15:35:42 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	FragTrap::setHp();
	ScavTrap::setEp();
	FragTrap::setAd();
}

DiamondTrap::DiamondTrap(const std::string &newName):ClapTrap(newName + "_clap_name"), FragTrap(newName + "_frag_name"), ScavTrap(newName + "_scav_name"), _name(newName)
{
	std::cout << "DiamondTrap assignation constructor called" << std::endl;
	FragTrap::setHp();
	ScavTrap::setEp();
	FragTrap::setAd();
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = FragTrap::_ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy):ClapTrap(cpy._name + "_clap_name"), FragTrap(cpy._name + "_frag_name"), ScavTrap(cpy._name + "_scav_name"), _name(cpy._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator= (const DiamondTrap &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

std::string DiamondTrap::getName() const
{
	return (this->_name);
}

int	DiamondTrap::getHp() const
{
	return (this->_hp);
}

int	DiamondTrap::getEp() const
{
	return (this->_ep);
}

int	DiamondTrap::getAd() const
{
	return (this->_ad);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name is " << this->_name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}
