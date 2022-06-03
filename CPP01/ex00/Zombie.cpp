/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:30:43 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 15:57:41 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) { this->name = name; }	

Zombie::~Zombie() { std::cout << "<" << this->name << " died>" << std::endl; }

void	Zombie::announce()
{
	std::cout << this->name << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}
