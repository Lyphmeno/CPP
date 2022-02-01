/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:14:54 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/01 14:00:24 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	trunc(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	fill_book(contact *book)
{
	book->id = 1;
	std::cout << "First name : ";
	std::cin >> book->first_name;
	std::cout << "Last name : ";
	std::cin >> book->last_name;
	std::cout << "Nickname : ";
	std::cin >> book->nickname;
	std::cout << "Phone number : ";
	std::cin >> book->phone;
	std::cout << "Darkest secret : ";
	std::cin >> book->secret;
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
	contact 	book[8];
	std::string	input;
	int			i;

	i = 0;
	std::cout << "Hi, this is Your Awesome Phonebook !" << std::endl;
	while (input.compare("EXIT") != 0)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			if (i < 8)
				fill_book(&book[i]);
			else
				std::cout << "I don't have this good of a memory to add more contact..." << std::endl;
			i++;
		}
		if (input.compare("SEARCH") == 0)
		{
			i = 0;
            std::cout << std::right << std::setw(10) << "INDEX" << "|" ;
            std::cout << std::right << std::setw(10) << "FIRST NAME" << "|" ;
            std::cout << std::right << std::setw(10) << "LAST NAME" << "|" ;
            std::cout << std::right << std::setw(10) << "NICKNAME" << "|" << std::endl;
			while (book[i].id != 0 && i < 8)
			{
				std::cout << std::right << std::setw(10) << i + 1 << "|";
				std::cout << std::right << std::setw(10) << trunc(book[i].first_name) << "|";
				std::cout << std::right << std::setw(10) << trunc(book[i].last_name) << "|";
				std::cout << std::right << std::setw(10) << trunc(book[i].nickname) << "|" << std::endl;
				i++;
			}
			search_Data(input, book);
		}
	}
	std::cout << "I hope you'll remember them because I won't" << std::endl;
	return (0);
}
