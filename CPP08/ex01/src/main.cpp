/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:51:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/14 17:02:50 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand((int)time(NULL));
	int size = 10;
	Span testV(size - 1);
	Span testV2(100);
	std::vector<int>::iterator start = testV2.getVectorAddr().begin();
	std::vector<int>::iterator end = testV2.getVectorAddr().end();
	
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
		std::cout << testV.shortestSpan() << std::endl;
		std::cout << testV.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		testV2.addNumbers(start, end, 5);
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