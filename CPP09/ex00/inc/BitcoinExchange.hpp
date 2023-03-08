/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:21:19 by hlevi             #+#    #+#             */
/*   Updated: 2023/03/08 13:41:03 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>
#include <iostream>
#include <map>

class BitcoinExchange
{
public:
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
