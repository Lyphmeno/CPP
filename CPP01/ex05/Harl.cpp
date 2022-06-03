/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:20:07 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 17:44:37 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

typedef	void(Harl::*complainPtr)();

void	Harl::complain(std::string level)
{
	complainPtr	complainArray[4] = {
					&Harl::debug,
					&Harl::info,
					&Harl::warning,
					&Harl::error,
	};
	std::string	strArray[4]{
					"DEBUG",
					"INFO",
					"WARNING",
					"ERROR",
	};
	for (int i = 0; i < 4; i++)
		if (level == strArray[i])
			(this->*complainArray[i])();
}
