/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:08:15 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/06 16:35:13 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string	_name;
		bool		_signed;
		const int	_signGrade;
		const int	_exeGrade;
	public:
		Form();
		Form(std::string newName, int toSign, int toExe);
		Form(const Form &cpy);
		~Form();
		Form	&operator= (const Form &rhs);

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

std::ostream	&operator<< (std::ostream &os, const Form &rhs);
