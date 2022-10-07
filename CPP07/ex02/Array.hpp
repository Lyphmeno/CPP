/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:12:46 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/07 18:53:05 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

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
	Array<T> &operator=(Array<T> rhs);
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
