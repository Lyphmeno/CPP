/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:03:33 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 17:00:25 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) { this->type = type; }

Weapon::~Weapon(){}

std::string	Weapon::getType() { return (this->type); }

void	Weapon::setType(std::string type) { this->type = type; }
