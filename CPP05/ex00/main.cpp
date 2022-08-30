/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/30 13:08:27 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *Ed;
	Bureaucrat *frost = new Bureaucrat("Nick", 1);
	Bureaucrat *pegg = new Bureaucrat("Simon", 150);

	try
	{
		Ed = new Bureaucrat("Shaun", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete Ed;
	}
	

	std::cout << std::endl;
	std::cout << *frost;
	std::cout << *pegg << std::endl;

	frost->demote();
	std::cout << *frost;
	std::cout << *pegg << std::endl;

	pegg->demote();
	std::cout << *frost;
	std::cout << *pegg << std::endl;

	pegg->promote();
	std::cout << *frost;
	std::cout << *pegg << std::endl;

	delete frost;
	delete pegg;
	return (0);
}