#include "ScalarConvert.hpp"
#define LOG 0

ScalarConvert::ScalarConvert()
{
	if (LOG == 1)
		std::cout << "ScalarConvert default constructor called" << std::endl;
}

ScalarConvert::ScalarConvert(const ScalarConvert &cpy)
{
	if (LOG == 1)
		std::cout << "ScalarConvert copy constructor called" << std::endl;
	(void)cpy;
}

ScalarConvert::~ScalarConvert()
{
	if (LOG == 1)
		std::cout << "ScalarConvert default destructor called" << std::endl;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &rhs)
{
	if (this != &rhs)
	{
		// ! Make copy !
	}
	return (*this);
}