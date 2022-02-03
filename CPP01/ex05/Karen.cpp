/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:20:07 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/03 15:01:49 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){}

Karen::~Karen(void){}

typedef	void(Karen::*complainPtr)(void);

void	Karen::complain(std::string level)
{
	complainPtr	complainArray[4] = {
					&Karen::debug,
					&Karen::info,
					&Karen::warning,
					&Karen::error,
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
