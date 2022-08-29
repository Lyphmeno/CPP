/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:39 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 11:02:47 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():_brainPtr(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &cpy):_brainPtr(new Brain(*cpy._brainPtr))
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brainPtr;
}

Dog	&Dog::operator=	(const Dog &rhs)
{
	*this->_brainPtr = *rhs._brainPtr;
	this->_type = rhs._type;
	return (*this);
}

Brain	&Dog::getBrain()
{
	return (*this->_brainPtr);
}

void	Dog::makeSound() const
{
	std::cout << this->_type << " : woof" << std::endl;
}