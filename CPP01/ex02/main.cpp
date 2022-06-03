/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:17:27 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 16:16:44 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	stringBase = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringBase;
	std::string	&stringREF = stringBase;

	std::cout << "ADDRESS:" << std::endl;
	std::cout << "Base string adress: " << &stringBase << std::endl;
	std::cout << "Pointer string adress: " << stringPTR << std::endl;
	std::cout << "Reference string adress: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "STRING:" << std::endl;
	std::cout << "Base string: " << stringBase << std::endl;
	std::cout << "Pointer string: " << *stringPTR << std::endl;
	std::cout << "Reference string: " << stringREF << std::endl;
	return (0);
}
