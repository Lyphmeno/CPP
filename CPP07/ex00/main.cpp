/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:47:52 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/07 13:25:35 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a, b;
	char c, d;
	std::string e, f;

	a = 10;
	b = 20;
	c = 'c';
	d = 'd';
	e = "truc";
	f = "pas truc";

	std::cout << "a = |" << a << "|   et b = |" << b << "|" << std::endl;
	std::cout << "c = |" << c << "|    et d = |" << d << "|" << std::endl;
	std::cout << "e = |" << e << "| et f = |" << f << "|" << std::endl;
	std::cout << std::endl;
	swap(a, b);
	std::cout << "swap a/b" << std::endl;
	std::cout << "a = |" << a << "| et b = |" << b << "|" << std::endl;
	std::cout << "max a & b = " << max(a, b) << std::endl;
	std::cout << "min a & b = " << min(a, b) << std::endl;
	std::cout << std::endl;
	swap(c, d);
	std::cout << "swap c/d" << std::endl;
	std::cout << "c = |" << c << "| et d = |" << d << "|" << std::endl;
	std::cout << "max c & d = " << max(c, d) << std::endl;
	std::cout << "min c & d = " << min(c, d) << std::endl;
	std::cout << std::endl;
	swap(e, f);
	std::cout << "swap e/f" << std::endl;
	std::cout << "e = |" << e << "| et f = |" << f << "|" << std::endl;
	std::cout << "max e & f = " << max(e, f) << std::endl;
	std::cout << "min e & f = " << min(e, f) << std::endl;
	std::cout << std::endl;

	// int a = 2;
	// int b = 3;
	// ::swap(a, b);
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	// std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	// std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	return (0);
}