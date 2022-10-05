/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:24 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/05 15:54:26 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include <limits>
#include <string>
#include <sstream>

#define NONE 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define PSDLIT 5

class ScalarConvert
{
private:
	std::string _baseStr;
	char _charType;
	int _intType;
	float _floatType;
	double _doubleType;
	bool _ioverflow;
	bool _coverflow;
	int _typeValue;

public:
	// Coplien //
	ScalarConvert();
	ScalarConvert(const ScalarConvert &cpy);
	~ScalarConvert();
	ScalarConvert &operator=(const ScalarConvert &rhs);
	// Assignation contructors //
	// Operators //
	// Getters //
	char getCharType();
	int getIntType();
	float getFloatType();
	double getDoubleType();
	bool getIOverflow();
	bool getCOverflow();
	int getTypeValue();
	// Setters //
	void setCharType(const char c);
	void setIntType(const int val);
	void setFloatType(const float val);
	void setDoubleType(const double val);
	void setIOverflow(const bool val);
	void setCOverflow(const bool val);
	void setTypeValue(const int val);
	// Methods //
	void findType(char *str);
	bool isPsdLit(std::string str);
	void castAll();
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
	void printAll();
	// Exceptions //
	class ExWrongInput : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class ExWrongValue : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
