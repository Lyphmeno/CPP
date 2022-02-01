/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:17:27 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/01 18:23:41 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	stringBase = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringBase;
	std::string	&stringREF = stringBase;

	std::cout << "ADRESS:" << std::endl;
	std::cout << "Base string adress: " << &stringBase << std::endl;
	std::cout << "Pointer string adress: " << stringPTR << std::endl;
	std::cout << "Reference string adress: " << &stringREF << std::endl;
	std::cout << "STRING:" << std::endl;
	std::cout << "Base string: " << stringBase << std::endl;
	std::cout << "Pointer string: " << *stringPTR << std::endl;
	std::cout << "Reference string: " << stringREF << std::endl;
	return (0);
}
