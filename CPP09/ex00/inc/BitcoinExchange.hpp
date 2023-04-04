/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyfmeno <lyfmeno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:21:19 by hlevi             #+#    #+#             */
/*   Updated: 2023/04/04 11:57:46 by lyfmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <string>
#include <exception>
#include <iostream>
#include <sstream>
#include <climits>
#include <map>

class BitcoinExchange
{
public:
	std::map<std::string, std::string>	values;
	std::fstream						database;
	std::fstream						file;
	int									year;
	int									month;
	int									day;

private:
	BitcoinExchange();
public:
	// Coplien //
	BitcoinExchange(const BitcoinExchange &cpy);
	~BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &rhs);
	// Assignation contructors //
	BitcoinExchange(int, char**);
	// Operators //
	BitcoinExchange &operator+=(unsigned short val);
	BitcoinExchange &operator-=(unsigned short val);
	// Getters //
	double		getTotal(double qty, std::string cValue);
	int			getMonthLimit(int month, short year);
	// Setters //
	// Methods //
	int			err(std::string);
	bool		isContained(int *tab, size_t size, int value);
	void		printDb();
	void		fillDb();
	std::string	finalStr();
	int			parseAll(std::string, std::string, double&);
	void		compare();
	// Exceptions //
};
