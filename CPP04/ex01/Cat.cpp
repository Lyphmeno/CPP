/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:26 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/20 14:26:21 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():_brainPtr(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &cpy):_brainPtr(new Brain(*cpy._brainPtr))
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brainPtr;
}

Cat	&Cat::operator=	(const Cat &rhs)
{
	*this->_brainPtr = *rhs._brainPtr;
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->_type << " : moew" << std::endl;
}
