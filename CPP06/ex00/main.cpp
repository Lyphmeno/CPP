/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:02:41 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/21 12:38:33 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

// Float to double conversion can be done by the code so i just need to get a Float value
// Same shit for int to char (static_cast<char>(intarg)) (static_cast<double>(floatarg)
// So in theorie I just need to have the value in float and in char

int main(int ac, char **av)
{
	ScalarConvert converter;

	try
	{
		if (ac != 2)
			throw ScalarConvert::ExWrongInput();
		converter.findType(av[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error : ";
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
