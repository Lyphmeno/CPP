/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:02:41 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/14 15:34:16 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int isDouble(std::string str)
{
	return (0);
}

int isFloat(std::string str)
{
	return (0);
}

int isInt(std::string str)
{
	return (0);
}

int findType(char *str)
{
	std::string cpyStr(str);
	if (isDouble(cpyStr))
		return (1);
	else if (isFloat(cpyStr))
		return (2);
	else if (isInt(cpyStr))
		return (3);
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "One and only ONE arg needed for this program" << std::endl;
		return (-1);
	}
	findType(av[1]);
	return (0);
}
