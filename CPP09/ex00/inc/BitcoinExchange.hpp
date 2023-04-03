/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyfmeno <lyfmeno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:21:19 by hlevi             #+#    #+#             */
/*   Updated: 2023/04/03 12:04:17 by lyfmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <string>
#include <exception>
#include <iostream>
#include <sstream>
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
	// Getters //
	// Setters //
	// Methods //
	void	fillMap();
	// Exceptions //
};
