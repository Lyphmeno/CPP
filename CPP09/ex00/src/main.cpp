/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyfmeno <lyfmeno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:20:28 by hlevi             #+#    #+#             */
/*   Updated: 2023/04/03 11:44:10 by lyfmeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

int main (int ac, char **av)
{
	try { BitcoinExchange	test(ac, av); }
	catch (const std::exception& e) { std::cout << "\033[31m" << e.what() << "\033[0m\n"; }
	return 0;
}
