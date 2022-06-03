/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:57:27 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 16:59:06 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA): weaponA(weaponA)
{
	this->name = name;
}

HumanA::~HumanA(){}

Weapon&	HumanA::getWeapon() const { return (this->weaponA); }

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " 
	<< this->weaponA.getType() << std::endl;
}
