#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
private:
public:
	// Coplien //
	Intern();
	Intern(const Intern &cpy);
	~Intern();
	Intern &operator=(const Intern &rhs);
	// Assignation contructors //
	// Operators //
	// Getters //
	// Setters //
	// Methods //
	Form *makeForm(const std::string&, const std::string&);
	// Exceptions //
};
