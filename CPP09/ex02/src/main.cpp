/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:46:43 by hlevi             #+#    #+#             */
/*   Updated: 2023/04/04 14:50:33 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<int>	vec;
	std::list<int>		lst;
	double				vecTime = 0.0;	
	double				lstTime = 0.0;	
	int					threshold = 16;

	if (argc < 2)
		return (exitPrint("Error: Not enough arguments", -1));
	if (fillContainers(vec, lst, argc, argv) == -1)
		return(-1);
	displayPreview(vec, 'b');
	sortVector(vec, vecTime, threshold);
	sortList(lst, lstTime, threshold);
	displayPreview(vec, 'a');
	displayTimes(vec, lst, vecTime, lstTime);
	return (0);
}