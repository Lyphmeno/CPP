/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:08:15 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 14:15:40 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _signGrade;
	const int _exeGrade;
	bool _signed;

public:
	Form();
	Form(std::string newName, int toSign, int toExe);
	Form(const Form &cpy);
	virtual ~Form();
	Form &operator=(const Form &rhs);

	const std::string &getName() const;
	bool getStatus() const;
	int getSignGrade() const;
	int getExeGrade() const;

	void beSigned(const Bureaucrat &bcrat);

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &rhs);
