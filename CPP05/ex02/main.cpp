/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/09 15:17:11 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat *bureaucrat = new Bureaucrat("Cronos", 2);
	Bureaucrat *stagiaire = new Bureaucrat("Rhea", 149);
	Bureaucrat *alternant = new Bureaucrat("Mnemosyne", 138);
	Form *aForm = new Form();
	Form *bForm = new Form("Koyos", 137, 2);
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

	Bureaucrat *toHigh;
	Bureaucrat *toLow;

	try
	{
		toHigh = new Bureaucrat("ToHigh", 0);
		std::cerr << "ToHigh Exception ERROR " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "ToHigh Exception : " << e.what() << std::endl;
	}

	try
	{
		toLow = new Bureaucrat("ToLow", 420);
		std::cerr << "ToLow Exception ERROR " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "ToLow Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	Form *cForm;
	try
	{
		cForm = new Form("Themis", 140, 0);
		std::cerr << "Themis Exception ERROR " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Themis Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << *alternant;
	std::cout << *bForm;
	try
	{
		alternant->signForm(*bForm);
	}
	catch (std::exception &e)
	{
		std::cerr << "Mnemosyne Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;

	alternant->promote();
	std::cout << *alternant;
	std::cout << *bForm;
	try
	{
		alternant->signForm(*bForm);
	}
	catch (std::exception &e)
	{
		std::cerr << "Mnemosyne Exception : " << e.what() << std::endl;
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
	delete aForm;
	delete bForm;
	delete alternant;
	delete bureaucrat;
	delete stagiaire;
}