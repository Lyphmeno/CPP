/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:02:41 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/22 15:19:11 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int ac, char **av)
{
	ScalarConvert converter;

	try
	{
		if (ac != 2)
			throw ScalarConvert::ExWrongInput();
		converter.findType(av[1]);
		if (!converter.getTypeValue())
			throw ScalarConvert::ExWrongValue();
		converter.castAll();
		converter.printAll();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error : ";
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
