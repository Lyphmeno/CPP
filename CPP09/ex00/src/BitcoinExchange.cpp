#include "../inc/BitcoinExchange.hpp"
#include <fstream>

/////////////////////////////
// Coplien                 //
/////////////////////////////
BitcoinExchange::BitcoinExchange(int ac, char *input)
{
	if (ac != 2 || !input)
		throw std::invalid_argument("Error: invalid parameters");
	this->database.open("data.csv", std::fstream::in);
	if (!this->database.is_open())
		throw std::invalid_argument("Error: cannot open 'data.csv'");
	
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
		this
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
