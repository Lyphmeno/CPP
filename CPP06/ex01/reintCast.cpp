/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reintCast.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:41:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/03 12:49:09 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
