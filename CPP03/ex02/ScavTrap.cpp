/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:25:09 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/12 14:50:06 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName)
{
	this->setName(newName);
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::ScavTrap(const ScavTrap &trap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = trap;
}

void	ScavTrap::guardGates()
{
	std::cout << this->getName() << " entered GateKeeper mode" << std::endl;
}
