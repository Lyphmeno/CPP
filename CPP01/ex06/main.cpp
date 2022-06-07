/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:41:30 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/07 11:05:48 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	testHarl;

	if (argc == 1)
		std::cout << "Well Harl might be dead if he's not talking" << std::endl;
	else
		testHarl.complain(argv[1]);
	return (0);
}
