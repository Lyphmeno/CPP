/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:20 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/05 16:43:13 by hlevi            ###   ########.fr       */
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
	this->_ioverflow = false;
	this->_coverflow = false;
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
	this->_ioverflow = cpy._ioverflow;
	this->_coverflow = cpy._coverflow;
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
		this->_ioverflow = rhs._ioverflow;
		this->_coverflow = rhs._coverflow;
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
char ScalarConvert::getCharType() { return this->_charType; }

int ScalarConvert::getIntType() { return this->_intType; }

float ScalarConvert::getFloatType() { return this->_floatType; }

double ScalarConvert::getDoubleType() { return this->_doubleType; }

bool ScalarConvert::getIOverflow() { return this->_ioverflow; }

bool ScalarConvert::getCOverflow() { return this->_coverflow; }

int ScalarConvert::getTypeValue() { return this->_typeValue; }
/////////////////////////////
// Setters                 //
/////////////////////////////
void ScalarConvert::setCharType(const char c) { this->_charType = c; }

void ScalarConvert::setIntType(const int val) { this->_intType = val; }

void ScalarConvert::setFloatType(const float val) { this->_floatType = val; }

void ScalarConvert::setDoubleType(const double val) { this->_doubleType = val; }

void ScalarConvert::setIOverflow(const bool val) { this->_ioverflow = val; }

void ScalarConvert::setCOverflow(const bool val) { this->_coverflow = val; }

void ScalarConvert::setTypeValue(const int val) { this->_typeValue = val; }
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
	if (!(hasDot == 1))
		hasDot = 0;
	if (i == 1 && !hasDig)
	{
		this->setTypeValue(CHAR);
		this->_charType = str[0];
	}
	else if (hasDot == 1 && str[i - 2] != '.' && hasDig && hasFlt)
	{
		this->setTypeValue(FLOAT);
		this->_floatType = std::strtof(str, NULL);
		if (!(std::strtol(str, NULL, 10) >= INT_MIN && std::strtol(str, NULL, 10) <= INT_MAX))
			this->_ioverflow = true;
		if (!(std::strtol(str, NULL, 10) >= 0 && std::strtol(str, NULL, 10) <= 127))
			this->_coverflow = true;
	}
	else if (hasDot == 1 && str[i - 1] != '.' && hasDig && !hasFlt)
	{
		this->setTypeValue(DOUBLE);
		this->_doubleType = std::strtod(str, NULL);
		if (!(std::strtol(str, NULL, 10) >= INT_MIN && std::strtol(str, NULL, 10) <= INT_MAX))
			this->_ioverflow = true;
		if (!(std::strtol(str, NULL, 10) >= 0 && std::strtol(str, NULL, 10) <= 127))
			this->_coverflow = true;
	}
	else if (!hasDot && hasDig && !hasFlt && !hasLtr)
	{
		if (std::strtol(str, NULL, 10) >= INT_MIN && std::strtol(str, NULL, 10) <= INT_MAX)
		{
			this->setTypeValue(INT);
			this->_intType = std::atoi(this->_baseStr.c_str());
		}
		if (!(std::strtol(str, NULL, 10) >= 0 && std::strtol(str, NULL, 10) <= 127))
			this->_coverflow = true;
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
	std::cout << "char: ";
	if (this->_typeValue == PSDLIT || this->_typeValue == NONE)
		std::cout << "impossible" << std::endl;
	else if (this->_coverflow)
		std::cout << "over/under flow" << std::endl;
	else if (this->_charType < 33 || this->_charType > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << this->_charType << "'" << std::endl;
}

void ScalarConvert::printInt()
{
	std::cout << "int: ";
	if (this->_typeValue == PSDLIT || this->_typeValue == NONE)
		std::cout << "impossible" << std::endl;
	else if (this->_ioverflow)
		std::cout << "over/under flow" << std::endl;
	else
		std::cout << this->_intType << std::endl;
}

void ScalarConvert::printFloat()
{
	std::cout << "float: ";
	if (this->_typeValue == NONE)
		std::cout << "impossible" << std::endl;
	else if (this->_typeValue == PSDLIT)
	{
		if (this->_baseStr == "+inf" || this->_baseStr == "-inf" || this->_baseStr == "nan")
			std::cout << this->_baseStr << "f" << std::endl;
		else
			std::cout << this->_baseStr << std::endl;
	}
	else if (std::strtol(this->_baseStr.c_str(), NULL, 10) >= INT_MIN && std::strtol(this->_baseStr.c_str(), NULL, 10) <= INT_MAX)
		std::cout << std::fixed << std::setprecision(1) << this->_floatType << "f" << std::endl;
	else
		std::cout << this->_floatType << "f" << std::endl;
}

void ScalarConvert::printDouble()
{
	std::cout << "double: ";
	if (this->_typeValue == NONE)
		std::cout << "impossible" << std::endl;
	else if (this->_typeValue == PSDLIT)
	{
		if (this->_baseStr == "+inf" || this->_baseStr == "-inf" || this->_baseStr == "nan")
			std::cout << this->_baseStr << std::endl;
		else
			std::cout << this->_baseStr.substr(0, this->_baseStr.size() - 1) << std::endl;
	}
	else if (std::strtol(this->_baseStr.c_str(), NULL, 10) >= INT_MIN && std::strtol(this->_baseStr.c_str(), NULL, 10) <= INT_MAX)
		std::cout << std::fixed << std::setprecision(1) << this->_doubleType << std::endl;
	else
		std::cout << this->_doubleType << std::endl;
}

void ScalarConvert::printAll()
{
	printChar();
	printInt();
	printFloat();
	printDouble();
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
	return ("Value entered is not valid, please enter one of those types :\nCHAR, INT, FlOAT, DOUBLE");
}
