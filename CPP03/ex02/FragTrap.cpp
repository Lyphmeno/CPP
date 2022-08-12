/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:25:09 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/12 14:50:19 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap(std::string newName)
{
	this->setName(newName);
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
}

FragTrap::FragTrap(const FragTrap &trap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = trap;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->getName() << " : GIVE ME FIVE !!!" << std::endl;
}
