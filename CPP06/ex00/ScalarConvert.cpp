/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:20 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/21 16:33:02 by hlevi            ###   ########.fr       */
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
	this->_baseStr = "";
	this->_strClean = "";
	this->_charType = 0;
	this->_intType = 0;
	this->_floatType = 0;
	this->_doubleType = 0;
	this->_typeValue = 0;
}

ScalarConvert::ScalarConvert(const ScalarConvert &cpy)
{
	if (LOG == 1)
		std::cout << "ScalarConvert copy constructor called" << std::endl;
	this->_baseStr = cpy._baseStr;
	this->_strClean = cpy._strClean;
	this->_charType = cpy._charType;
	this->_intType = cpy._intType;
	this->_floatType = cpy._floatType;
	this->_doubleType = cpy._doubleType;
	this->_typeValue = cpy._typeValue;
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
		this->_baseStr = rhs._baseStr;
		this->_strClean = rhs._strClean;
		this->_charType = rhs._charType;
		this->_intType = rhs._intType;
		this->_floatType = rhs._floatType;
		this->_doubleType = rhs._doubleType;
		this->_typeValue = rhs._typeValue;
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

int ScalarConvert::getTypeValue()
{
	return this->_typeValue;
}
/////////////////////////////
// Setters                 //
/////////////////////////////
void ScalarConvert::setCharType(const char c)
{
	this->_charType = c;
}
void ScalarConvert::setIntType(const int val)
{
	this->_intType = val;
}
void ScalarConvert::setFloatType(const float val)
{
	this->_floatType = val;
}
void ScalarConvert::setDoubleType(const double val)
{
	this->_doubleType = val;
}
void ScalarConvert::setTypeValue(const int val)
{
	this->_typeValue = val;
}
/////////////////////////////
// Ooperators              //
/////////////////////////////
/////////////////////////////
// Methods                 //
/////////////////////////////
void ScalarConvert::findType(char *str)
{
	this->_baseStr = std::string(str);
	int hasDot = 0;
	int hasFlt = 0;
	int hasDig = 0;
	int hasNeg = 0;
	int hasLtr = 0;
	int i = 0;

	if (this->_baseStr.size() == 1)
	{
		std::cout << "Is a CHAR !" << std::endl;
		this->setTypeValue(CHAR);
		this->_charType = std::atoi(str);
		return;
	}
	if (isPsdLit(this->_baseStr))
	{
		std::cout << "Is a LIT PSEUDO !" << std::endl;
		this->setTypeValue(PSDLIT);
		return;
	}
	while (str[i])
	{
		if (i == 0 && str[i] == '-')
			hasNeg++;
		else if (str[i] == '.')
			hasDot++;
		else if (std::isdigit(str[i]))
			hasDig++;
		else if (i == ((int)_baseStr.size() - 1) && str[i] == 'f')
			hasFlt++;
		else if (std::isalpha(str[i]))
			hasLtr++;
		i++;
	}
	if (hasDot == 1 && hasDig && hasFlt)
	{
		std::cout << "Is a FLOAT !" << std::endl;
		this->setTypeValue(FLOAT);
		this->_floatType = std::stof(this->_baseStr);
	}
	else if (hasDot == 1 && hasDig && !hasFlt)
	{
		std::cout << "Is a DOUBLE !" << std::endl;
		this->setTypeValue(DOUBLE);
		this->_doubleType = std::stod(this->_baseStr);
	}
	else if (!hasDot && hasDig && !hasFlt && !hasLtr)
	{
		std::cout << "Is a INT !" << std::endl;
		this->setTypeValue(INT);
	}
	else
		this->setTypeValue(NONE);
	return;
}

bool ScalarConvert::isPsdLit(std::string str)
{
	if (!(str.compare("nanf") && str.compare("nan") && str.compare("-inff") &&
		  str.compare("-inf") && str.compare("+inff") && str.compare("+inf")))
		return (true);
	return (false);
}
/////////////////////////////
// Exceptions              //
/////////////////////////////
const char *ScalarConvert::ExWrongInput::what() const throw()
{
	return ("One and only ONE arg needed for this program");
}
