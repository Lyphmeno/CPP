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
	if (this != &rhs)
	{
		// ! Make copy !
	}
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
/////////////////////////////
// Exceptions              //
/////////////////////////////