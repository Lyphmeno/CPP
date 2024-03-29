/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:12:46 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/12 15:19:07 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdexcept>

#define LOG 0

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	// Coplien //
	Array();
	Array(const Array<T> &cpy);
	virtual ~Array();
	Array<T> &operator=(Array<T> &rhs);
	// Assignation contructors //
	Array(unsigned int n);
	// Operators //
	T &operator[](const int index) const;
	// Getters //
	// Setters //
	// Methods //
	int size() const;
	// Exceptions //
};

#include "Array.tpp"
