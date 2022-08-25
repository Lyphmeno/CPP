/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/25 17:42:30 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	frost("Nick", 1);
	Bureaucrat	pegg("Simon", 150);
	Bureaucrat	Ed("Shaun", 0);

	std::cout << std::endl << frost;
	std::cout << Ed;
	std::cout << pegg << std::endl;

	frost.demote();
	std::cout << frost;
	std::cout << pegg << std::endl;
	
	pegg.demote();
	std::cout << frost;
	std::cout << pegg << std::endl;

	pegg.promote();
	std::cout << frost;
	std::cout << pegg << std::endl;
	return (0);
}