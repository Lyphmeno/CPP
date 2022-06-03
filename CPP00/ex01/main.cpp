/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:14:54 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 14:56:14 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	is_Num(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (std::isdigit(str[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}

void	search_Data(std::string input, Phonebook *book)
{
	int	i;

	book->show_all();
	std::cout << "What index are you interested in ?" << std::endl;
	std::getline(std::cin, input);
	std::istringstream(input) >> i;
	if (is_Num(input) == -1 || i < 0 || i > 7)
		std::cout << "Not a valid entry" << std::endl;
	else
		book->show_index(i);
}

int	main()
{
	Phonebook	book;
	std::string	input;
	std::cout << "Hi, this is Your Awesome Phonebook !" << std::endl;
	while (input.compare("EXIT") != 0)
	{
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			book.set_contact();
		if (input.compare("SEARCH") == 0)
			search_Data(input, &book);
	}
	std::cout << "I hope you'll remember them because I won't" << std::endl;
	return (0);
}
