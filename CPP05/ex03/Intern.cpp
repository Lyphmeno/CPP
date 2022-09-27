#include "Intern.hpp"
#define LOG 0

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
	// ! Make copy ! this->thing = cpy->thing
}

Intern::~Intern()
{
	if (LOG == 1)
		std::cout << "Intern default destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &rhs)
{
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
Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string formRealName;
	std::cout << "Intern created a " << formRealName << std::endl;
	return (newForm);
}
/////////////////////////////
// Exceptions              //
/////////////////////////////