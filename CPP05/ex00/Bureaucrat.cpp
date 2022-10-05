/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:28:40 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/05 14:58:53 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("John Doe"), _grade(150)
{
	if  (LOG == 1)
		std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade): _name(newName)
{
	if  (LOG == 1)
		std::cout << "Bureaucrat assignation constructor called" << std::endl;
	if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = newGrade;
		if (LOG == 1)
			std::cout << "Bureaucrat assignation constructor succeeded" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _name(cpy._name)
{
	if  (LOG == 1)
		std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (cpy._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (cpy._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = cpy._grade;
		if  (LOG == 1)
			std::cout << "Bureaucrat copy constructor succeeded" << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	if  (LOG == 1)
		std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::promote()
{
	if (this->_grade > 1)
	{
		std::cout << this->_name << " has been promoted" << std::endl;
		this->_grade--;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::demote()
{
	if (this->_grade < 150)
	{
		std::cout << this->_name << " has been demoted" << std::endl;
		this->_grade++;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

// GradeTooLowException
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW.");
}

// GradeTooHighException
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too HIGH.");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bcrat)
{
	std::cout << bcrat.getName() << ", bureaucrat grade -> " << bcrat.getGrade() << std::endl;
	return (os);
}