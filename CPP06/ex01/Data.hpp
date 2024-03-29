/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:39:02 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/03 12:48:49 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct
{
	int _intTest;
	std::string _strTest;
} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
