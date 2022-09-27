/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:56:52 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 15:45:40 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("newCreationForm", 145, 137), _target(target)
{
	if (LOG == 1)
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target, std::string newName) : Form(newName, 145, 137), _target(target)
{
	if (LOG == 1)
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form(cpy), _target(cpy._target)
{
	if (LOG == 1)
		std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (LOG == 1)
		std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void ShrubberyCreationForm::exe() const
{
	std::string fileName = this->_target + "_shrubbery";
	std::fstream treeFile;

	treeFile.open(fileName.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
	if (treeFile.is_open())
	{
		treeFile << "        ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		treeFile << "     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		treeFile << "    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		treeFile << "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		treeFile << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		treeFile << "    `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		treeFile << "        |o|        | |         | |" << std::endl;
		treeFile << "        |.|        | |         | |" << std::endl;
		treeFile << "  	  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		treeFile.close();
		std::cout << "Created " << fileName << " and draw lil ascii trees in it ^^" << std::endl;
	}
	else
		std::cout << "Unable to open " << fileName << std::endl;
}
