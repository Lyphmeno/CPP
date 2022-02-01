/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:30:43 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/01 17:24:04 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}	

Zombie::~Zombie(void)
{
	std::cout << "<" << this->name << " died>"
	 << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">  "
	<< "BraiiiiiiinnnzzzZ..." << std::endl;
}
