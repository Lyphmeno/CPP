/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:52:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/01 12:08:31 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("faded materia")
{
	if (LOG == 1)
		std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	if (LOG == 1)
		std::cout << "AMateria assignation constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy)
{
	if (LOG == 1)
		std::cout << "AMateria copy constructor called" << std::endl;
	*this = cpy;
}

AMateria::~AMateria()
{
	if (LOG == 1)
		std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Unknown materia being used on " << target.getName() << std::endl;
}
