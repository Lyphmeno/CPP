/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:25:09 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/26 15:36:17 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hp = 120;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const std::string &newName):ClapTrap(newName)
{
	std::cout << "FragTrap assignation constructor called" << std::endl;
	this->_hp = 120;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const FragTrap &cpy):ClapTrap(cpy._name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap	&FragTrap::operator= (const FragTrap &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

void	FragTrap::setHp()
{
	this->_hp = 120;
}

void	FragTrap::setEp()
{
	this->_ep = 100;
}

void	FragTrap::setAd()
{
	this->_ad = 30;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->getName() << " : GIVE ME FIVE !!!" << std::endl;
}
