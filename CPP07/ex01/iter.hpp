/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:31:48 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/07 16:24:53 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template <typename T>
void iter(T *array, int arraySize, void (*arrayFunction)(const T &))
{
	for (int i = 0; i < arraySize; i++)
		arrayFunction(array[i]);
}
