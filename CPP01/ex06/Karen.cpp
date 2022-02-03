/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:20:07 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/03 15:01:32 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){}

Karen::~Karen(void){}

typedef	void(Karen::*complainPtr)(void);

void	Karen::complain(std::string level)
{
	int	i;
	std::string	strArray[4]{
					"DEBUG",
					"INFO",
					"WARNING",
					"ERROR",
	};
	for (i = 0; i < 4; i++)
		if (level == strArray[i])
			break;
	
	switch (i)
	{
		case DEBUG:
				debug();
		case INFO:
				info();
		case WARNING:
				warning();
		case ERROR:
				error();
				break;
		default:
				std::cout << "[Probably complaining about insignificant problems]" << std::endl;
				break;
	}
}
