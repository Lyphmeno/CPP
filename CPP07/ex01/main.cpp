/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:32:09 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/07 16:28:57 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void display(T &target)
{
	std::cout << "val -> " << target << std::endl;
}

int main()
{
	int intArray[] = {1, 2, 3, 4};
	char charArray[] = {'a', 'b', 'c', 'd'};
	std::string strArray[] = {"je", "suis", "un", "poisson"};

	iter(intArray, 4, &display);
	std::cout << std::endl;
	iter(charArray, 4, &display);
	std::cout << std::endl;
	iter(strArray, 4, &display);
}
