/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:28:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/20 13:19:23 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

#define LOG	0

class Form;

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string newName, int rank);
		Bureaucrat(const Bureaucrat &cpy);
		virtual ~Bureaucrat();
		Bureaucrat	&operator= (const Bureaucrat &rhs);

		std::string	getName() const;
		int			getGrade() const;

		void	promote();
		void	demote();
		void	signForm(Form &rhs);
		void	executeForm(const Form &form);

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<< (std::ostream &os, const Bureaucrat &bcrat);
