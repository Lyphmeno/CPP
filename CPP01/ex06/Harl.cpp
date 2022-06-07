/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:20:07 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/07 11:02:16 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

typedef	void(Harl::*complainPtr)(void);

void	Harl::complain(std::string level)
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
