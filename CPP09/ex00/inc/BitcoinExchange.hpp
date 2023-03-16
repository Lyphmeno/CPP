/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:21:19 by hlevi             #+#    #+#             */
/*   Updated: 2023/03/16 16:19:41 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <string>
#include <exception>
#include <iostream>
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
	BitcoinExchange(int, char*);
	// Operators //
	// Getters //
	// Setters //
	// Methods //
	// Exceptions //
};
