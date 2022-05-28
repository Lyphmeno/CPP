/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:14:54 by hlevi             #+#    #+#             */
/*   Updated: 2022/04/12 14:22:56 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string	trunc(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	search_Data(std::string input, contact *book)
{
	int	i;

	std::cout << "What index are you interested in ?" << std::endl;
	std::cin >> input;
	std::istringstream(input) >> i;
	if (i != 0)
	{
		if (book[i - 1].id == 1)
		{
			std::cout << "First name : " << book[i - 1].first_name << std::endl;
			std::cout << "Last name : " << book[i - 1].last_name << std::endl;
			std::cout << "Nickname : " << book[i - 1].nickname << std::endl;
			std::cout << "Phone number : " << book[i - 1].phone << std::endl;
			std::cout << "Darkest secret : " << book[i - 1].secret << std::endl;
		}
		else
			std::cout << "This person doesn't exist !" << std::endl;
	}
	else
		std::cout << "What are you trying to tell me..." << std::endl;
}

int	main()
{
	Phonebook	*book = new Phonebook();
	std::string	input;
	std::cout << "Hi, this is Your Awesome Phonebook !" << std::endl;
	while (input.compare("EXIT") != 0)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
			book
		if (input.compare("SEARCH") == 0)
		{
		}
	}
	std::cout << "I hope you'll remember them because I won't" << std::endl;
	return (0);
}
