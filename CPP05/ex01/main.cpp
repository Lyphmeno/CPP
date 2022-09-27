/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/27 14:17:33 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bureaucrat = new Bureaucrat("Cronos", 2);
	Bureaucrat *stagiaire = new Bureaucrat("Rhea", 149);
	Bureaucrat *alternant = new Bureaucrat("Mnemosyne", 141);
	Form *aForm = new Form();
	Form *bForm = new Form("Koyos", 140, 2);

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
	delete aForm;
	delete bForm;
	delete alternant;
	delete bureaucrat;
	delete stagiaire;
}