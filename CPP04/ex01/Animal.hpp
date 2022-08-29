/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:28 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 11:08:43 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain;

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &cpy);
		virtual	~Animal();
		Animal	&operator= (const Animal &rhs);

		std::string		getType() const;
		virtual	Brain	&getBrain() = 0;

		virtual void	makeSound() const = 0;
};