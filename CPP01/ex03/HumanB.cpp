/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:07:51 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/02 15:22:54 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(){}

Weapon	*HumanB::getWeapon(void)
{
	return (this->weaponB);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weaponB = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weaponB->getType() << std::endl;
}
