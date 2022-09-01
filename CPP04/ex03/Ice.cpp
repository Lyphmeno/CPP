/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:50 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/01 11:07:09 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	if (LOG == 1)
		std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &cpy)
{
	if (LOG == 1)
		std::cout << "Ice copy constructor called" << std::endl;
	*this = cpy;
}

Ice::~Ice()
{
	if (LOG == 1)
		std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	return (*this);
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout <<"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
