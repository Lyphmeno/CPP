/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:12:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/13 09:46:12 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_stock = 8;

Fixed::Fixed():_fpvalue(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fp)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fp;
}

Fixed::Fixed(const int nb)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fpvalue = nb << this->_stock;
}

Fixed::Fixed(const float nb)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fpvalue = roundf(nb *(1 << this->_stock));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &fp)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_fpvalue = fp.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator++()
{
	_fpvalue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp = *this;
	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	_fpvalue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp = *this;
	--*this;
	return (tmp);
}

Fixed	Fixed::operator+ (const Fixed &rhs) const
{
	float	res;

	res = this->toFloat() + rhs.toFloat();
	return (res);
}

Fixed	Fixed::operator- (const Fixed &rhs) const
{
	float	res;

	res = this->toFloat() - rhs.toFloat();
	return (res);
}

Fixed	Fixed::operator* (const Fixed &rhs) const
{
	float	res;
	res = this->toFloat() * rhs.toFloat();
	return (res);
}

Fixed	Fixed::operator/ (const Fixed &rhs) const
{
	float	res;

	res = this->toFloat() / rhs.toFloat();
	return (res);
}

bool	Fixed::operator== (const Fixed &rhs) const
{
	return (this->_fpvalue == rhs._fpvalue);
}

bool	Fixed::operator!= (const Fixed &rhs) const
{
	return (this->_fpvalue != rhs._fpvalue);
}

bool	Fixed::operator<= (const Fixed &rhs) const
{
	return (this->_fpvalue <= rhs._fpvalue);
}

bool	Fixed::operator>= (const Fixed &rhs) const
{
	return (this->_fpvalue >= rhs._fpvalue);
}

bool	Fixed::operator< (const Fixed &rhs) const
{
	return (this->_fpvalue < rhs._fpvalue);
}

bool	Fixed::operator> (const Fixed &rhs) const
{
	return (this->_fpvalue > rhs._fpvalue);
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpvalue);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
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

Fixed Fixed::min(Fixed &fp1, Fixed &fp2)
{
	if (fp1._fpvalue > fp2._fpvalue)
		return (fp2);
	return (fp1);
}

Fixed Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1._fpvalue > fp2._fpvalue)
		return (fp2);
	return (fp1);
}

Fixed Fixed::max(Fixed &fp1, Fixed &fp2)
{
	if (fp1._fpvalue < fp2._fpvalue)
		return (fp2);
	return (fp1);
}

Fixed Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1._fpvalue < fp2._fpvalue)
		return (fp2);
	return (fp1);
}

std::ostream	&operator<<(std::ostream &val, const Fixed &fixed)
{
	val << fixed.toFloat();
	return (val);
}
