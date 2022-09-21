/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:24 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/21 16:33:01 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

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
	std::string _strClean;
	char _charType;
	int _intType;
	float _floatType;
	double _doubleType;
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
	int getTypeValue();
	// Setters //
	void setCharType(const char c);
	void setIntType(const int val);
	void setFloatType(const float val);
	void setDoubleType(const double val);
	void setTypeValue(const int val);
	// Methods //
	void findType(char *str);
	bool isPsdLit(std::string str);
	// Exceptions //
	class ExWrongInput : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
