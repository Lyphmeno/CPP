#include "C.hpp"
#define LOG 0

/////////////////////////////
// Coplien                 //
/////////////////////////////
C::C()
{
	if (LOG == 1)
		std::cout << "C default constructor called" << std::endl;
}

C::C(const C &cpy)
{
	if (LOG == 1)
		std::cout << "C copy constructor called" << std::endl;
	// ! Make copy ! this->thing = cpy->thing
}

C::~C()
{
	if (LOG == 1)
		std::cout << "C default destructor called" << std::endl;
}

C &C::operator=(const C &rhs)
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