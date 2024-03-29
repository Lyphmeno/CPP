/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:25 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/20 12:56:45 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();
		Dog	&operator= (const Dog &rhs);

		void		makeSound() const;
};
