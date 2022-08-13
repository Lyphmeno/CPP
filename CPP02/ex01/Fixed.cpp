/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:12:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/13 09:39:22 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_stock = 8;

Fixed::Fixed():_fpvalue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpvalue = nb << this->_stock;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpvalue = roundf(nb *(1 << this->_stock));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &fp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fpvalue = fp.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpvalue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpvalue = raw;
}

int		Fixed::toInt() const
{
	return (this->_fpvalue / (1 << _stock));
}

float	Fixed::toFloat() const
{
	return ((float)this->_fpvalue / (float)(1 << _stock));
}

std::ostream	&operator<<(std::ostream &val, const Fixed &fixed)
{
	val << fixed.toFloat();
	return (val);
}
