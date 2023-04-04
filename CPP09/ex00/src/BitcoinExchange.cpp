/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:28:57 by lyfmeno           #+#    #+#             */
/*   Updated: 2023/04/04 12:29:34 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"
#include <fstream>

/////////////////////////////
// Coplien                 //
/////////////////////////////
BitcoinExchange::BitcoinExchange(int ac, char **input)
{
	if (ac < 2 || !input)
		throw std::invalid_argument("Error: invalid parameters");
	this->database.open("data.csv", std::fstream::in);
	if (!this->database.is_open())
		throw std::invalid_argument("Error: cannot open 'data.csv'");
	this->fillDb();
	for (int i = 1; i < ac; i++)
	{
		this->file.open(input[i], std::fstream::in);
		if (!this->file.is_open())
			throw std::invalid_argument("Error: cannot open input");
		this->compare();
		this->file.close();
	}
	this->database.close();
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
		this->values = rhs.values;
		this->year = rhs.year;
		this->month = rhs.month;
		this->day = rhs.day;
	}
	return (*this);
}
/////////////////////////////
// Assignation contructors //
/////////////////////////////
/////////////////////////////
// Getters                 //
/////////////////////////////
double	BitcoinExchange::getTotal(double qty, std::string cValue)
{
	std::stringstream ssC;
	double dCValue;
	ssC << cValue;
	ssC >> dCValue;

	return (qty * dCValue);
}

int BitcoinExchange::getMonthLimit(int month, short year)
{
	int oddMonths[7] = {1, 3, 5, 7, 8, 10, 12};
	int evenMonths[4] = {4, 6, 9, 11};
	int monthLimit = 0;

	if (isContained(oddMonths, 7, month))
		monthLimit = 31;
	else if (isContained(evenMonths, 4, month))
		monthLimit = 30;
	else if (month == 2)
		monthLimit = (year % 4 ? 28 : 29);
	return (monthLimit);
}
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Operators               //
/////////////////////////////
BitcoinExchange &BitcoinExchange::operator+=(unsigned short val)
{
	for (int i = 0; i < val; i++)
	{
		if (this->day + 1 > getMonthLimit(this->month, this->year))
		{
			this->day = 1;
			this->month++;
			if (this->month > 12)
			{
				this->month = 1;
				this->year++;
				if (this->year == 0)
					this->year = 1;
			}
		}
		else
			this->day++;
	}
	return (*this);
}

BitcoinExchange &BitcoinExchange::operator-=(unsigned short val)
{
	for (int i = 0; i < val; i++)
	{
		if (this->day == 1)
		{
			if (this->month == 1)
			{
				this->month = 12;
				this->year--;
				if (this->year == 0)
					this->year = -1;
			}
			this->day = getMonthLimit(this->month, this->year);
		}
		else
			this->day--;
	}
	return (*this);
}
/////////////////////////////
// Methods                 //
/////////////////////////////
int		BitcoinExchange::err(std::string err)
{
	std::cout << "Error: " << err << std::endl;
	return (-1);
}

bool	BitcoinExchange::isContained(int *tab, size_t size, int value)
{
	for (size_t i = 0; i < size; i++)
		if (tab[i] == value)
			return true;
	return false;
}

// DATABASE
void	BitcoinExchange::printDb()
{
	for (std::map<std::string, std::string>::const_iterator it = this->values.begin(); it != this->values.end(); it++)
		std::cout << (*it).first << "=>" << (*it).second << std::endl;
}

void	BitcoinExchange::fillDb()
{
	std::string	line;

	std::getline(this->database, line);
	while (std::getline(this->database, line))
	{
		int					i = 0;
		std::string			date;
		std::string			val;
		std::string			words;
		std::istringstream	iss(line);

		while (std::getline(iss, words, ','))
		{
			if ((i == 0 || i == 1) && words.empty())
				throw std::invalid_argument("Error: invalid database");
			if (i == 0)
				date = words;
			else if (i == 1)
				val = words;
			else
				throw std::invalid_argument("Error: invalid database");
			i++;
		}
		if (i < 2)
			throw std::invalid_argument("Error: invalid database");
		this->values[date] = val;
	}
	//this->printDb();
}

// INPUT FILE
bool isinMap(int *tab, size_t size, int value)
{
	for (size_t i = 0; i < size; i++)
		if (tab[i] == value)
			return (true);
	return (false);
}

std::string BitcoinExchange::finalStr()
{
	std::stringstream stream;
	std::stringstream sizeStream;

	sizeStream << this->year;
	for (size_t i = 4; i > sizeStream.str().size() ; i-- )
		stream << "0";
	stream << this->year;
	stream << "-";

	if (this->month < 10)
		stream << "0";
	stream << this->month;
	stream << "-";

	if (this->day < 10)
		stream << "0";
	stream << this->day;
	return (stream.str());
}

int		BitcoinExchange::parseAll(std::string date, std::string val, double &qty)
{
	for (size_t i = 0; i < date.size(); i++)
		if ((date.size() != 10) || ((date.at(i) < '0' || date.at(i) > '9') && date.at(i) != '-') 
			|| (date.at(i) == '-' && i != 4 && i != 7) || ((i == 4 || i == 7) && date.at(i) != '-'))
			return (this->err("invalid date"));
	std::istringstream	issD(date);
	std::string			chunk;
	std::stringstream	issChunk;

	std::getline(issD, chunk, '-');
	issChunk << chunk;
	issChunk >> this->year;
	std::getline(issD, chunk, '-');
	issChunk.clear();
	issChunk << chunk;
	issChunk >> this->month;
	std::getline(issD, chunk, '-');
	issChunk.clear();
	issChunk << chunk;
	issChunk >> this->day;
	if ((month > 12) || (day > 31) || (year % 4 && month == 2 && day > 28) || (!(year % 4) && month == 2 && day > 29))
		return (this->err("invalid date"));

	std::istringstream	issQ(val);
	std::string			tmp;
	double				decimal = 0;

	if (!(issQ >> qty) || qty < 0)
		return (this->err("not a positive integer"));
	else if (qty > INT_MAX)
		return (this->err("too big an integer"));
	if (issQ >> tmp)
	{
		std::istringstream ssTmp(tmp.substr(1, tmp.size()));
		if (tmp[0] == ',')
		{
			if (ssTmp >> decimal)
			{
				while (decimal > 1)
					decimal /= 10;
				qty += decimal;
			}
			else
				return (this->err("not a positive integer"));
			if (ssTmp >> tmp)
				return (this->err("not a positive integer"));
		}
		else
			return (this->err("not a positive integer"));
	}
	return (0);
}

void	BitcoinExchange::compare()
{
	std::string	line;
	std::string	date;
	std::string	val;

	std::getline(this->file, line);
	if (line.compare("date | value"))
		this->err("first line should be 'date | value'");
	while (std::getline(this->file, line))
	{
		std::istringstream	iss(line);
		std::string			word;
		double				qty = 0.0;

		if (!std::getline(iss, word, '|'))
		{
			this->err("invalid date");
			continue;
		}
		date = word.substr(0, word.size() - 1);
		if (!std::getline(iss, word, '|'))
		{
			this->err("invalid value");
			continue;
		}
		val = word.substr(1, word.size() - 1);
		if (this->parseAll(date, val, qty))
			continue;
		std::cout << this->finalStr() << " => " << qty << " = ";
		if (this->values.find(this->finalStr()) == this->values.end())
		{
			*this -= 1;
			while (this->values.find(this->finalStr()) == this->values.end() && this->year >= 2009)
				*this -= 1;
		}
		if (this->values.find(this->finalStr()) != this->values.end())
			std::cout << getTotal(qty, this->values[this->finalStr()]) << std::endl;
		else
			std::cout << "[ ERROR ] Date is too old" << std::endl;
	}
}
/////////////////////////////
// Exceptions              //
/////////////////////////////
