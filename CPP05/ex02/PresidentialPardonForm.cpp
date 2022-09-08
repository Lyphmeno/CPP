/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:02:22 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/08 15:27:45 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("newPardonForm", 25, 5)
{
	if (LOG == 1)
		std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string newName) : Form(newName, 25, 5)
{
	if (LOG == 1)
		std::cout << "PresidentialPardonForm assignation constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
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
	return (*this);
}

void	PresidentialPardonForm::exe(const Bureaucrat &executor) const
{
	std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}