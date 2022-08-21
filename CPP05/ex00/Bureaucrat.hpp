/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:28:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 18:30:03 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define GMAX 1
#define GMIN 150

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;
	public:
		Bureaucrat(const std::string newName, int rank);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
		Bureaucrat	&operator= (const Bureaucrat &rhs);

		std::string	getName() const;
		int			getGrade() const;

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
