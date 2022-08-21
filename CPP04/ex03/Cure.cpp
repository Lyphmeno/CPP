/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:45 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 15:43:16 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria()
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &type):AMateria("cure")
{
	std::cout << "Cure assignation constructor called" << std::endl;
}

Cure::Cure(const Cure &cpy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = cpy;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=	(const Cure &rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string const &Cure::getType() const
{
	return (this->type);
}

Cure	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds*" << std::endl;
}
