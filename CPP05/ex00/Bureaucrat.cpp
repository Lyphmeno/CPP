/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:28:40 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 18:40:37 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string newName, int newGrade):_name(newName)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (newGrade < GMAX)
		throw Bureaucrat::GradeTooHighException ();
	else if (newGrade > GMIN)
		throw Bureaucrat::GradeTooLowException ();
	this->_grade = newGrade;
}


Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	this->_name = cpy._name;
	this->_grade = cpy._grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}