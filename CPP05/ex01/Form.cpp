/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:20:06 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/06 17:32:09 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("John Doe"), _signed(false), _signGrade(150), _exeGrade(150)
{
	if (LOG == 1)
		std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string newName, const int toSign, const int toExe) : _signed(false)
{
	if (LOG == 1)
		std::cout << "Default constructor called" << std::endl;
	this->_name = newName;
	if (toSign < 1 || toExe < 1)
		throw Form::GradeTooHighException();
	if (toSign > 150 || toExe > 150)
		throw Form::GradeTooLowException();
	else
	{ 
		// Need to find a way to init const with exception !
		this->_signGrade = toSign;
		this->_exeGrade = toExe;
	}
}