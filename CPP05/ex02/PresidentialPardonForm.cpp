/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:02:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 15:43:39 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("newPardonForm", 25, 5), _target(target)
{
	if (LOG == 1)
		std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target, std::string newName) : Form(newName, 25, 5), _target(target)
{
	if (LOG == 1)
		std::cout << "PresidentialPardonForm assignation constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy), _target(cpy._target)
{
	if (LOG == 1)
		std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	if (LOG == 1)
		std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void PresidentialPardonForm::exe() const
{
	std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}