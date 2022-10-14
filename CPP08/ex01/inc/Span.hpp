/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:50:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/14 16:59:10 by hlevi            ###   ########.fr       */
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
	void addNumber(int num);
	void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end, int num);
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
