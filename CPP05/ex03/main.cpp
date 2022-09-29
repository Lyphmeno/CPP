/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/29 12:42:06 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat *bureaucrat = new Bureaucrat("Cronos", 1);
	Intern *stagiaire = new Intern();
	Form *formReal;
	Form *formWrong;

	formReal = stagiaire->makeForm("presidential pardon", "Hecatonchires");
	formReal->beSigned(*bureaucrat);
	bureaucrat->executeForm(*formReal);

	formWrong = stagiaire->makeForm("error test", "Hecatonchires");

	delete formReal;
	delete formWrong;
	delete stagiaire;
	delete bureaucrat;
}