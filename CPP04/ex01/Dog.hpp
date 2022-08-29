/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:25 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 11:04:02 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brainPtr;
	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();
		Dog	&operator= (const Dog &rhs);

		Brain	&getBrain();

		void		makeSound() const;
};
