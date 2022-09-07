/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:20:06 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/07 13:14:13 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("John Doe"), _signed(false), _signGrade(150), _exeGrade(150)
{
	if (LOG == 1)
		std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string newName, const int toSign, const int toExe) : _signed(false)
{
	if (LOG == 1)
		std::cout << "Form assignation constructor called" << std::endl;
	if (toSign < 1 || toExe < 1)
		throw Form::GradeTooHighException();
	if (toSign > 150 || toExe > 150)
		throw Form::GradeTooLowException();
	else
	{
		// Need to find a way to init const with exception !
		this->_name = newName;
		this->_signGrade = toSign;
		this->_exeGrade = toExe;
	}
}

Form::Form(const Form &cpy)
{
	if (LOG == 1)
		std::cout << "Form copy constructor called" << std::endl;
	if (cpy._signGrade < 1 || cpy._exeGrade < 1)
		throw Form::GradeTooHighException();
	if (cpy._signGrade > 150 || cpy._exeGrade > 150)
		throw Form::GradeTooLowException();
	else
	{
		this->_name = cpy._name;
		this->_signGrade = cpy._signGrade;
		this->_exeGrade = cpy._exeGrade;
		this->_signed = cpy._signed;
	}
}

Form::~Form()
{
	if (LOG == 1)
		std::cout << "Form default destructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_signGrade = rhs.getSignGrade();
		this->_exeGrade = rhs.getExeGrade();
		this->_signed = rhs.getStatus();
	}
	return (*this);
}

// Getter
const std::string &Form::getName() const
{
	return (this->_name);
}

bool Form::getStatus() const
{
	return (this->_signed);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExeGrade() const
{
	return (this->_exeGrade);
}

// Else
void Form::beSigned(const Bureaucrat &bcrat)
{
	if (bcrat.getGrade() < this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

// GradeTooLowException
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW.");
}

// GradeTooHighException
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too HIGH.");
}

std::ostream &operator<<(std::ostream &os, const Form &rhs)
{
	std::cout << rhs.getName() << ", form status -> " << rhs.getStatus() << std::endl;
	return (os);
}
