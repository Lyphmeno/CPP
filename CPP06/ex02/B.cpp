#include "B.hpp"
#define LOG 0

/////////////////////////////
// Coplien                 //
/////////////////////////////
B::B()
{
	if (LOG == 1)
		std::cout << "B default constructor called" << std::endl;
}

B::B(const B &cpy)
{
	if (LOG == 1)
		std::cout << "B copy constructor called" << std::endl;
	// ! Make copy ! this->thing = cpy->thing
}

B::~B()
{
	if (LOG == 1)
		std::cout << "B default destructor called" << std::endl;
}

B &B::operator=(const B &rhs)
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