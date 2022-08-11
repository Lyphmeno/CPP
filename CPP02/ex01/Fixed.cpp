/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:12:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/07/28 15:35:09 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fpvalue = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp;
}

Fixed::Fixed(int const intoBin)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpvalue = intoBin * (1 << bitFraction);
}

Fixed::Fixed(float const floatoBin)
{
	std::cout << "Float constructor called" << std::endl;
	this->fpvalue = roundf(floatoBin * (1 << bitFraction));
}

Fixed	&Fixed::operator = (const Fixed &fp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpvalue = fp.getRawBits();
	return (*this);
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

int		Fixed::toInt() const
{
	return (this->fpvalue / (1 << bitFraction));
}

float	Fixed::toFloat() const
{
	return ((float)this->fpvalue / (float)(1 << bitFraction));
}

std::ostream &operator << (std::ostream &res, const Fixed &fixed)
{
	res << fixed.toFloat();
	return (res);
}
