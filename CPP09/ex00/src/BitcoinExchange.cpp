#include "../inc/BitcoinExchange.hpp"

/////////////////////////////
// Coplien                 //
/////////////////////////////
BitcoinExchange::BitcoinExchange(int ac, char *input)
{
	if (ac != 2 || !input)
		throw std::invalid_argument("Error: invalid parameters");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	*this = cpy;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
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
