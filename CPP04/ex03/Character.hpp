/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:34 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 13:04:00 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define maxSlot 4

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*inventory[maxSlot];
	public:
		Character();
		Character(std::string newName);
		Character(const Character &cpy);
		virtual ~Character() {}
		Character	&operator=	(const Character &rhs);

		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, Character& target) = 0;
};
