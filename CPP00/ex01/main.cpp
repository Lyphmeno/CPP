/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:14:54 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/01 17:41:51 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	search_Data(std::string input, Phonebook *book)
{
	int	i;

	book->show_all();
	std::cout << "What index are you interested in ?" << std::endl;
	std::cin >> input;
	std::istringstream(input) >> i;
	book->show_index(i);
}

int	main()
{
	Phonebook	book;
	std::string	input;
	std::cout << "Hi, this is Your Awesome Phonebook !" << std::endl;
	while (input.compare("EXIT") != 0)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
			book.set_contact();
		if (input.compare("SEARCH") == 0)
			search_Data(input, &book);
		else
			std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "I hope you'll remember them because I won't" << std::endl;
	return (0);
}
