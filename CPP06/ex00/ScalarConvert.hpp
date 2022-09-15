/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:24 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/15 16:32:55 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ScalarConvert
{
private:
	std::string _baseStr;
	char _charType;
	int _intType;
	float _floatType;
	double _doubleType;

public:
	// Coplien //
	ScalarConvert();
	ScalarConvert(const ScalarConvert &cpy);
	~ScalarConvert();
	ScalarConvert &operator=(const ScalarConvert &rhs);
	// Assignation contructors //
	// Ooperators //
	// Getters //
	char getCharType();
	int getIntType();
	float getFloatType();
	double getDoubleType();
	// Setters //
	void setCharType(const char c) const;
	void setIntType(const int val) const;
	void setFloatType(const float val) const;
	void setDoubleType(const double val) const;
	// Methods //
	// Exceptions //
	class ExWrongInput : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
