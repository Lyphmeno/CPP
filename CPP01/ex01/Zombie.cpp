/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:48:54 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 16:08:01 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name) { this->name = name; }

Zombie::~Zombie() { std::cout << "<" << this->name << " died>" << std::endl; }

void	Zombie::setName(std::string name) { this->name = name; }	

void	Zombie::announce()
{
	std::cout << this->name << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}
