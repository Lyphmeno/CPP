/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:20:28 by hlevi             #+#    #+#             */
/*   Updated: 2023/03/08 13:42:02 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

int main (int ac, char **av)
{
	try { BitcoinExchange	test(ac, av[1]); }
	catch (const std::exception& e) { std::cout << "\033[31m" << e.what() << "\033[0m\n"; }
	return 0;
}
