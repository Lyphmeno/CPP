/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:11:48 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/05 14:54:50 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int		main()
{
	srand((unsigned int)time(NULL));
	Base *test;
	Base *test1;
	Base *test0;

	test = generate();
	identify(test);
	identify(*test);

	test1 = generate();
	identify(test1);
	identify(*test1);

	test0 = generate();
	identify(test0);
	identify(*test0);
	return (0);
}