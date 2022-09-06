/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:08:15 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/06 14:10:42 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string	_name;
		bool		_sign;
		int			_signGrade;
		int			_exeGrade;
	public:
		Form();
		~Form();
};
