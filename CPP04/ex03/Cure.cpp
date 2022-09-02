/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:45 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/02 13:14:48 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	if (LOG == 1)
		std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &cpy) : AMateria(cpy)
{
	if (LOG == 1)
		std::cout << "Cure copy constructor called" << std::endl;
	*this = cpy;
}

Cure::~Cure()
{
	if (LOG == 1)
		std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	return (*this);
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds*" << std::endl;
}
