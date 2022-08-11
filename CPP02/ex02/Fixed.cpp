/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:12:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/11 12:30:35 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->fpvalue = 0;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fp)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fp;
}

Fixed::Fixed(int const intoBin)
{
	//std::cout << "Int constructor called" << std::endl;
	this->fpvalue = intoBin * (1 << bitFraction);
}

Fixed::Fixed(float const floatoBin)
{
	//std::cout << "Float constructor called" << std::endl;
	this->fpvalue = roundf(floatoBin *(1 << bitFraction));
}

Fixed	&Fixed::operator= (const Fixed &rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->fpvalue = rhs.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator++()
{
	fpvalue++;
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
	fpvalue--;
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
	return (this->fpvalue == rhs.fpvalue);
}

bool	Fixed::operator!= (const Fixed &rhs) const
{
	return (this->fpvalue != rhs.fpvalue);
}

bool	Fixed::operator<= (const Fixed &rhs) const
{
	return (this->fpvalue <= rhs.fpvalue);
}

bool	Fixed::operator>= (const Fixed &rhs) const
{
	return (this->fpvalue >= rhs.fpvalue);
}

bool	Fixed::operator< (const Fixed &rhs) const
{
	return (this->fpvalue < rhs.fpvalue);
}

bool	Fixed::operator> (const Fixed &rhs) const
{
	return (this->fpvalue > rhs.fpvalue);
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fpvalue);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
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

Fixed Fixed::min(Fixed &fp1, Fixed &fp2)
{
	if (fp1.fpvalue > fp2.fpvalue)
		return (fp2);
	return (fp1);
}

Fixed Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1.fpvalue > fp2.fpvalue)
		return (fp2);
	return (fp1);
}

Fixed Fixed::max(Fixed &fp1, Fixed &fp2)
{
	if (fp1.fpvalue < fp2.fpvalue)
		return (fp2);
	return (fp1);
}

Fixed Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1.fpvalue < fp2.fpvalue)
		return (fp2);
	return (fp1);
}

std::ostream &operator << (std::ostream &res, const Fixed &fixed)
{
	res << fixed.toFloat();
	return (res);
}
