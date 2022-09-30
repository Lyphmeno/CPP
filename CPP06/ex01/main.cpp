/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/30 18:03:43 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr);
{
	return ();
}

Data *deserialize(uintptr_t *ptr);

int	main()
{
	// Should try to reinterpret_cast for the uintptr_t
	// It seems to be the only way to cast within this type
	Data dataTest;
	uintptr_t newUIntPtr;

	std::cout << "data address : " << &dataTest << std::endl;
	newUIntPtr = serialize(&dataTest);
	return (0);
}