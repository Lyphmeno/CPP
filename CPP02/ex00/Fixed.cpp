/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:12:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/09 14:34:46 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called" << std::endl;
	this->fpvalue = 0;
}

Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fp)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fpvalue = fp.getRawBits();
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpvalue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fpvalue = raw;
}
