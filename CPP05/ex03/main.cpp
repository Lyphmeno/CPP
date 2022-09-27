/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 16:15:21 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat *bureaucrat = new Bureaucrat("Cronos", 2);
	Bureaucrat *stagiaire = new Bureaucrat("Rhea", 149);
	Bureaucrat *alternant = new Bureaucrat("Mnemosyne", 138);
	Form *treeTest = new ShrubberyCreationForm("treeFile", "Persephone");
	Form *presTest = new PresidentialPardonForm("Eros", "Zeus");
	Form *roboTest = new RobotomyRequestForm("Rosemary Kennedy", "Hephaistos");

	try
	{
		std::cout << *bureaucrat;
		bureaucrat->promote();
		std::cout << *bureaucrat;
		bureaucrat->promote();
		std::cerr << "DPromote Exception ERROR " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "DPromote Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << *stagiaire;
		stagiaire->demote();
		std::cout << *stagiaire;
		stagiaire->demote();
		std::cerr << "DDemote Exception ERROR " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "DDemote Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat *tooHigh;
	Bureaucrat *tooLow;

	try
	{
		tooHigh = new Bureaucrat("TooHigh", 0);
		std::cerr << "ToHigh Exception ERROR " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "TooHigh Exception : " << e.what() << std::endl;
	}

	try
	{
		tooLow = new Bureaucrat("TooLow", 420);
		std::cerr << "TooLow Exception ERROR " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "TooLow Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		alternant->executeForm(*treeTest);
	}
	catch (std::exception &e)
	{
		std::cerr << "Persephone 1st Exe Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << *alternant;
	std::cout << *treeTest;

	try
	{
		alternant->signForm(*treeTest);
	}
	catch (std::exception &e)
	{
		std::cerr << "Persephone Sign Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	alternant->promote();
	std::cout << *alternant;
	std::cout << *treeTest;

	try
	{
		alternant->executeForm(*treeTest);
	}
	catch (std::exception &e)
	{
		std::cerr << "Persephone 2nd Exe Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << *bureaucrat;
	std::cout << *roboTest;
	bureaucrat->signForm(*roboTest);

	try
	{
		bureaucrat->executeForm(*roboTest);
	}
	catch (std::exception &e)
	{
		std::cerr << "Persephone Sign Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << *presTest;
	bureaucrat->signForm(*presTest);

	try
	{
		bureaucrat->executeForm(*presTest);
	}
	catch (std::exception &e)
	{
		std::cerr << "Persephone Sign Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	delete presTest;
	delete roboTest;
	delete treeTest;
	delete alternant;
	delete bureaucrat;
	delete stagiaire;
}