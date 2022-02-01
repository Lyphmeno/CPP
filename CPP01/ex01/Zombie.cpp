/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:48:54 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/01 18:06:02 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}	

Zombie::~Zombie(void)
{
	std::cout << "<" << this->name << " died>"
	 << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}	

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">  "
	<< "BraiiiiiiinnnzzzZ..." << std::endl;
}
