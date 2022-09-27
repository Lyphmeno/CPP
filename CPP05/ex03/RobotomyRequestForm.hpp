/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:55:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 15:44:33 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string _target;
	void exe() const;

public:
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm(std::string const target, std::string newName);
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
};
