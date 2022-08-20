/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:31:28 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/20 11:19:56 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &cpy);
		~Animal();
		Animal	&operator= (const Animal &rhs);

		std::string	getType() const;
		void		makeSound() const;
};