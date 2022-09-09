/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:54:41 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/09 15:13:32 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("newRequestForm", target, 72, 45)
{
	if (LOG == 1)
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target, std::string newName) : Form(newName, target, 72, 45)
{
	if (LOG == 1)
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy)
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
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void RobotomyRequestForm::exe() const
{
	srand((unsigned int)time(NULL));
	std::cout << "*drill sounds*" << std::endl;
	if (rand() % 2 != 0)
		std::cout << "Robotomy on subject " << this->getTarget() << " is a success !" << std::endl;
	else
		std::cout << "*Staff leaving the room like nothing happened*" << std::endl;
}