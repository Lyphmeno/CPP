/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:52:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 16:15:10 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():type("faded materia")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type):type(type)
{
	std::cout << "AMateria assignation constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = cpy;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=	(const AMateria &rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

