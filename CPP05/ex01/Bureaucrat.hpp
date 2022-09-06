/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:28:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/06 13:51:03 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define LOG	0

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string newName, int rank);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
		Bureaucrat	&operator= (const Bureaucrat &rhs);

		std::string	getName() const;
		int			getGrade() const;

		void	promote();
		void	demote();

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
