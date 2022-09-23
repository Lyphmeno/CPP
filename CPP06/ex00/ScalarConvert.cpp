/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:20 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/23 15:00:30 by hlevi            ###   ########.fr       */
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
	if (i == 1 && !hasDig)
	{
		this->setTypeValue(CHAR);
		this->_charType = std::atoi(str);
		std::cout << "Is a CHAR : " << this->_charType << std::endl;
	}
	else if (hasDot == 1 && hasDig && hasFlt)
	{
		this->setTypeValue(FLOAT);
		this->_floatType = std::strtof(str, NULL);
		std::cout << "Is a FLOAT : " << this->_floatType << std::endl;
	}
	else if (hasDot == 1 && hasDig && !hasFlt)
	{
		this->setTypeValue(DOUBLE);
		this->_doubleType = std::strtod(str, NULL);
		std::cout << "Is a DOUBLE : " << this->_doubleType << std::endl;
	}
	else if (!hasDot && hasDig && !hasFlt && !hasLtr)
	{
		if (std::strtol(str, NULL, 10) >= INT_MIN && std::strtol(str, NULL, 10) <= INT_MAX)
		{
			this->setTypeValue(INT);
			this->_intType = std::atoi(str);
			std::cout << "Is a INT : " << this->_intType << std::endl;
		}
	}
	else
		this->setTypeValue(NONE);
	return;
}

void ScalarConvert::castAll()
{
	switch (this->getTypeValue())
	{
	case CHAR:
		this->_intType = static_cast<int>(this->_charType);
		this->_floatType = static_cast<float>(this->_charType);
		this->_doubleType = static_cast<double>(this->_charType);
		break;
	case INT:
		this->_charType = static_cast<char>(this->_intType);
		this->_floatType = static_cast<float>(this->_intType);
		this->_doubleType = static_cast<double>(this->_intType);
		break;
	case FLOAT:
		this->_charType = static_cast<char>(this->_floatType);
		this->_intType = static_cast<int>(this->_floatType);
		this->_doubleType = static_cast<double>(this->_floatType);
		break;
	case DOUBLE:
		this->_charType = static_cast<char>(this->_doubleType);
		this->_intType = static_cast<int>(this->_doubleType);
		this->_floatType = static_cast<float>(this->_doubleType);
		break;
	default:
		break;
	}
}

void ScalarConvert::printChar()
{
	if (this->_typeValue == PSDLIT)
		std::cout << "char: impossible" << std::endl;
	else if (this->_charType < 33 || this->_charType > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << this->_charType << std::endl;
}

void ScalarConvert::printInt()
{
	if (this->_typeValue == PSDLIT)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_intType << std::endl;
}

void ScalarConvert::printAll()
{
	printChar();
	printInt();
	std::cout << "float: " << this->_floatType << std::endl;
	std::cout << "double: " << this->_doubleType << std::endl;
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

const char *ScalarConvert::ExWrongValue::what() const throw()
{
	return ("Value entered is WRONG !");
}
