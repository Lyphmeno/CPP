/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:58:33 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/13 16:40:25 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

int	main()
{
	std::vector<int> testVector;
	std::list<int> testList;

	testVector.push_back(5);
	testVector.push_back(6);
	testVector.push_back(10);
	testVector.push_back(15);
	testVector.push_back(50);

	testList.push_back(5);
	testList.push_back(45);
	testList.push_back(21);
	testList.push_back(12);
	testList.push_back(64);
	testList.push_back(50);
	testList.push_back(50);

	std::cout << *(easyfind(testVector, 105)) << std::endl;
	std::cout << *(easyfind(testList, 4)) << std::endl;
	return (0);
}