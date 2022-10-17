/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:50:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/17 12:49:05 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <limits>

#define LOG 0

class Span
{
private:
	unsigned int _maxSize;
	std::vector<int> _intV;

	Span();

public:
	// Coplien //
	Span(const Span &cpy);
	~Span();
	Span &operator=(const Span &rhs);
	// Assignation contructors //
	Span(unsigned int N);
	// Operators //
	// Getters //
	std::vector<int> &getVectorAddr();
	// Setters //
	// Methods //
	void displayVector();
	void addNumber(int num);
	template <typename InputInterator>
	void addNumbers(InputInterator first, InputInterator last)
	{
		if (this->_intV.size() + std::distance(first, last) > this->_maxSize)
			throw Span::TooMuchNumber();
		else
			this->_intV.insert(this->_intV.begin(), first, last);
	}
	long long shortestSpan();
	long long longestSpan();
	// Exceptions //
	class TooMuchNumber : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class NoSpan : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

template <typename T>
T max(T &a, T &b)
{
	return (a > b ? a : b);
}

template <typename T>
T min(T &a, T &b)
{
	return (a < b ? a : b);
}
