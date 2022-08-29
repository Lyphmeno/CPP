/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:41 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 11:03:10 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("Jerry")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cpy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=	(const Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}
