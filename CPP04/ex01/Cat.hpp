/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:27 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 11:04:00 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brainPtr;
	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();
		Cat	&operator= (const Cat &rhs);

		Brain	&getBrain();

		void		makeSound() const;
};
