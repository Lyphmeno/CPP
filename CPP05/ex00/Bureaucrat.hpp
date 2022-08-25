/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:28:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/25 17:11:29 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
		Bureaucrat	&operator-- ();
		Bureaucrat	operator-- (int);
		Bureaucrat	&operator++ ();
		Bureaucrat	operator++ (int);

		std::string	getName() const;
		int			getGrade() const;

		void	promote();
		void	demote();

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw() 
				{
					return ("GradeTooLow");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("GradeTooHigh");
				}
		};
};

std::ostream	&operator<< (std::ostream &os, const Bureaucrat &bcrat);
