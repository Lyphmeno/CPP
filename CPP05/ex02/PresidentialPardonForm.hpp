/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:39:52 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 15:43:33 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string _target;
	void exe() const;

public:
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(std::string const target, std::string newName);
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
};
