/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:50 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 15:55:13 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria()
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &type):AMateria("ice")
{
	std::cout << "Ice assignation constructor called" << std::endl;
}

Ice::Ice(const Ice &cpy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = cpy;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=	(const Ice &rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string const &Ice::getType() const
{
	return (this->type);
}

Ice	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
