/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:54:41 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/08 15:26:47 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("newRequestForm", 72, 45)
{
	if (LOG == 1)
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, std::string newName) : Form(newName, 72, 45)
{
	if (LOG == 1)
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
{
	if (LOG == 1)
		std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (LOG == 1)
		std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	return (*this);
}

void	RobotomyRequestForm::exe(const Bureaucrat &executor) const
{
	std::cout << "*drill sounds*" << std::endl;
	if (rand() % 2 == 0)
		std::cout << "Robotomy on subject " << this->getTarget() << " is a success !" << std::endl;
	else
		std::cout << "*Staff leaving the room like nothing happened*" << std::endl;
}