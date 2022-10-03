/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/03 13:00:47 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data		*dataPtr = new Data;
	Data		*newDataPtr;
	uintptr_t	raw;

	dataPtr->_strTest = "test";
	dataPtr->_intTest = 42;
	std::cout << "dataPtr = " << dataPtr->_strTest << " | " << dataPtr->_intTest << std::endl;
	raw = serialize(dataPtr);
	newDataPtr = deserialize(raw);
	std::cout << "newDataPtr = " << newDataPtr->_strTest << " | " << newDataPtr->_intTest << std::endl;
	return (0);
}
