/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:56:52 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/08 15:29:13 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("newCreationForm", 145, 137)
{
	if (LOG == 1)
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, std::string newName) : Form(newName, 145, 137)
{
	if (LOG == 1)
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
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
	return (*this);
}

void	ShrubberyCreationForm::exe(const Bureaucrat &executor) const
{
	std::string fileName = this->getTarget() + "_shrubbery";
	std::fstream	treeFile;

	treeFile.open(fileName, std::ios::out);
	treeFile << "        ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	treeFile << "     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	treeFile << "    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	treeFile << "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	treeFile << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	treeFile << "    `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	treeFile << "        |o|        | |         | |" << std::endl;
	treeFile << "        |.|        | |         | |" << std::endl;
	treeFile << "     \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	treeFile.close();
}
