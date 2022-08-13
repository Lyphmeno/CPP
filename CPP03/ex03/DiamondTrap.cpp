/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:25:09 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/13 14:51:17 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName)
{
	std::cout << "DiamondTrap assignation constructor called" << std::endl;
	this->_name = newName;
	this->ClapTrap::_name = newName + "_clap_name";
	this->FragTrap::setHp();
	this->ScavTrap::setEp();
	this->FragTrap::setAd();
}

DiamondTrap::DiamondTrap(const DiamondTrap &trap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name is " << this->_name << std::endl;
	std::cout << "ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
