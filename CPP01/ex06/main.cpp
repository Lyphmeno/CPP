/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:41:30 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/03 15:00:36 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	testKaren;

	if (argc == 1)
		std::cout << "Well Karen might be dead if she's not talking" << std::endl;
	else
		testKaren.complain(argv[1]);
	return (0);
}
