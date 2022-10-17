/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:51:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/17 12:41:54 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand((int)time(NULL));
	int size = 10;
	Span testV(size - 1);
	Span testV2(100);

	while (size != 0)
	{
		try
		{
			testV.addNumber(rand() % 500);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		size--;
	}
	try
	{
		testV.displayVector();
		std::cout << testV.shortestSpan() << std::endl;
		std::cout << testV.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		testV2.addNumbers(testV.getVectorAddr().begin(), testV.getVectorAddr().end());
		testV2.displayVector();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	// Span sp = Span(5);
	// sp.addNumber(-6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(-21);
	// sp.addNumber(20);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return (0);
}