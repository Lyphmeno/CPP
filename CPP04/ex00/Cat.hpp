/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:27 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/20 12:56:42 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();
		Cat	&operator= (const Cat &rhs);

		void		makeSound() const;
};
