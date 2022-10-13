/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:50:18 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/13 16:51:18 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/////////////////////////////
// Coplien                 //
/////////////////////////////
Span::Span()
{
	if (LOG == 1)
		std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span &cpy)
{
	if (LOG == 1)
		std::cout << "Span copy constructor called" << std::endl;
	// ! Make copy ! this->thing = cpy->thing
}

Span::~Span()
{
	if (LOG == 1)
		std::cout << "Span default destructor called" << std::endl;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		// ! Make copy !
	}
	return (*this);
}

/////////////////////////////
// Assignation contructors //
/////////////////////////////
/////////////////////////////
// Getters                 //
/////////////////////////////
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Operators               //
/////////////////////////////
/////////////////////////////
// Methods                 //
/////////////////////////////
/////////////////////////////
// Exceptions              //
/////////////////////////////