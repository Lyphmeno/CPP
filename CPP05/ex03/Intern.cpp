#include "Intern.hpp"

/////////////////////////////
// Coplien                 //
/////////////////////////////
Intern::Intern()
{
	if (LOG == 1)
		std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	if (LOG == 1)
		std::cout << "Intern copy constructor called" << std::endl;
	(void)cpy;
}

Intern::~Intern()
{
	if (LOG == 1)
		std::cout << "Intern default destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

/////////////////////////////
// Assignation contructors //
/////////////////////////////
/////////////////////////////
// Getters                 //
/////////////////////////////
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Operators               //
/////////////////////////////
/////////////////////////////
// Methods                 //
/////////////////////////////
static Form *createPresidentialPardonForm(const std::string &targetName)
{
	return (new PresidentialPardonForm(targetName));
}

static Form *createRobotomyRequestForm(const std::string &targetName)
{
	return (new RobotomyRequestForm(targetName));
}

static Form *createShrubberyCreationForm(const std::string &targetName)
{
	return (new ShrubberyCreationForm(targetName));
}

Form *Intern::makeForm(const std::string &formName, const std::string &targetName)
{
	Form *newForm = NULL;
	typedef Form *(*formPtr)(const std::string &targetName);
	typedef struct
	{
		std::string name;
		formPtr formPtr;
	} FormTypes;

	FormTypes forms[] = {
		{"presidential pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i].name)
		{
			newForm = forms[i].formPtr(targetName);
			std::cout << "Intern has created a " << newForm->getName() << std::endl;
			return (newForm);
		}
	}
	std::cout << "Intern wasn't able to create the form asked" << std::endl;
	return (newForm);
}
/////////////////////////////
// Exceptions              //
/////////////////////////////