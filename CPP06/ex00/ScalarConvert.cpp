/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:20 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/15 16:13:13 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#define LOG 0

/////////////////////////////
// Coplien                 //
/////////////////////////////
ScalarConvert::ScalarConvert()
{
	if (LOG == 1)
		std::cout << "ScalarConvert default constructor called" << std::endl;
}

ScalarConvert::ScalarConvert(const ScalarConvert &cpy)
{
	if (LOG == 1)
		std::cout << "ScalarConvert copy constructor called" << std::endl;
	this->_charType = cpy._charType;
	this->_intType = cpy._intType;
	this->_floatType = cpy._doubleType;
	this->_floatType = cpy._floatType;
}

ScalarConvert::~ScalarConvert()
{
	if (LOG == 1)
		std::cout << "ScalarConvert default destructor called" << std::endl;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &rhs)
{
	if (this != &rhs)
	{
		this->_charType = rhs._charType;
		this->_intType = rhs._intType;
		this->_floatType = rhs._doubleType;
		this->_floatType = rhs._floatType;
	}
	return (*this);
}
/////////////////////////////
// Assignation contructors //
/////////////////////////////
/////////////////////////////
// Getters                 //
/////////////////////////////
char ScalarConvert::getCharType()
{
	return this->_charType;
}

int ScalarConvert::getIntType()
{
	return this->_intType;
}

float ScalarConvert::getFloatType()
{
	return this->_floatType;
}

double ScalarConvert::getDoubleType()
{
	return this->_doubleType;
}
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Ooperators              //
/////////////////////////////
/////////////////////////////
// Methods                 //
/////////////////////////////
/////////////////////////////
// Exceptions              //
/////////////////////////////
const char *ScalarConvert::ExWrongInput::what() const throw()
{
	return ("One and only ONE arg needed for this program");
}
