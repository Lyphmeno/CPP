/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:56:14 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 15:45:11 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	const std::string _target;
	void exe() const;

public:
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(std::string const target, std::string newName);
	ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
};
