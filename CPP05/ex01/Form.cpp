/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:20:06 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 14:20:34 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("John Doe"), _signGrade(150), _exeGrade(150), _signed(false)
{
	if (LOG == 1)
		std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string newName, const int toSign, const int toExe) : _name(newName), _signGrade(toSign), _exeGrade(toExe), _signed(false)
{
	if (LOG == 1)
		std::cout << "Form assignation constructor called" << std::endl;
	if (toSign < 1 || toExe < 1)
		throw Form::GradeTooHighException();
	else if (toSign > 150 || toExe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &cpy) : _name(cpy._name), _signGrade(cpy._signGrade), _exeGrade(cpy._exeGrade)
{
	if (LOG == 1)
		std::cout << "Form copy constructor called" << std::endl;
	if (cpy._signGrade < 1 || cpy._exeGrade < 1)
		throw Form::GradeTooHighException();
	else if (cpy._signGrade > 150 || cpy._exeGrade > 150)
		throw Form::GradeTooLowException();
	this->_signed = cpy._signed;
}

Form::~Form()
{
	if (LOG == 1)
		std::cout << "Form default destructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	if (rhs._signGrade < 1 || rhs._exeGrade < 1)
		throw Form::GradeTooHighException();
	else if (rhs._signGrade > 150 || rhs._exeGrade > 150)
		throw Form::GradeTooLowException();
	if (this != &rhs)
		this->_signed = rhs.getStatus();
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
	if (bcrat.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

void Bureaucrat::signForm(Form &rhs)
{
	if (rhs.getStatus() == true)
		std::cout << this->_name << " : I can't sign whats already signed for god sake !!!" << std::endl;
	else
		try
		{
			rhs.beSigned(*this);
			std::cout << this->_name << " signed " << rhs.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << this->_name << " couldn't sign " << rhs.getName() << " because ";
			std::cout << e.what() << std::endl;
		}
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
	std::cout << rhs.getName() << ", status -> " << rhs.getStatus();
	std::cout << " | toSign = " << rhs.getSignGrade();
	std::cout << " | toExe = " << rhs.getExeGrade() << std::endl;
	return (os);
}
