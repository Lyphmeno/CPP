/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:50:18 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/17 12:49:03 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/////////////////////////////
// Coplien                 //
/////////////////////////////
Span::Span() {}

Span::Span(const Span &cpy) : _maxSize(cpy._maxSize), _intV(cpy._intV)
{
	if (LOG == 1)
		std::cout << "Span copy constructor called" << std::endl;
}

Span::~Span()
{
	if (LOG == 1)
		std::cout << "Span default destructor called" << std::endl;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_maxSize = rhs._maxSize;
		this->_intV = rhs._intV;
	}
	return (*this);
}

/////////////////////////////
// Assignation contructors //
/////////////////////////////
Span::Span(unsigned int N) : _maxSize(N), _intV(std::vector<int>())
{
	if (LOG == 1)
		std::cout << "Span Assignation constructor called" << std::endl;
}
/////////////////////////////
// Getters                 //
/////////////////////////////
std::vector<int> &Span::getVectorAddr()
{
	return (this->_intV);
}
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Operators               //
/////////////////////////////
/////////////////////////////
// Methods                 //
/////////////////////////////
void Span::displayVector()
{
	std::vector<int>::iterator it = this->_intV.begin();

	for (; it < this->_intV.end(); it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
}

void Span::addNumber(int num)
{
	if (this->_intV.size() < this->_maxSize)
		this->_intV.push_back(num);
	else
		throw Span::TooMuchNumber();
}

long long Span::shortestSpan()
{
	std::vector<int>::iterator it = this->_intV.begin();
	int tmp = *it;
	long long smol = __LONG_LONG_MAX__;

	if (this->_intV.size() < 2)
		throw Span::NoSpan();
	for (; it < this->_intV.end(); it++)
	{
		if (it != this->_intV.begin())
			if (max(tmp, *it) - min(tmp, *it) < smol)
				smol = max(tmp, *it) - min(tmp, *it);
		tmp = *it;
	}
	return (smol);
}

long long Span::longestSpan()
{
	std::vector<int>::iterator it = this->_intV.begin();
	int tmp = *it;
	long long big = 0;

	if (this->_intV.size() < 2)
		throw Span::NoSpan();
	for (; it < this->_intV.end(); it++)
	{
		if (it != this->_intV.begin())
		{
			if (max(tmp, *it) - min(tmp, *it) > big)
				big = max(tmp, *it) - min(tmp, *it);
		}
		tmp = *it;
	}
	return (big);
}

/////////////////////////////
// Exceptions              //
/////////////////////////////

const char *Span::TooMuchNumber::what() const throw()
{
	return ("Maximum size reached, can't add more numbers");
}

const char *Span::NoSpan::what() const throw()
{
	return ("Not enough numbers to find a span");
}
