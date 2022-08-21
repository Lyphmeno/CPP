/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:34 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 16:07:20 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
		virtual ~Character();
		Character	&operator=	(const Character &rhs);

		virtual const std::string &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};
