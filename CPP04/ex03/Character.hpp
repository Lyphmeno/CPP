/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:34 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/30 14:53:25 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character: public ICharacter
{
	protected:
		std::string			_name;
		static const int	_slot = 4;
		AMateria			*_inventory[_slot];
	public:
		Character();
		Character(std::string newName);
		Character(const Character &cpy);
		virtual ~Character();
		Character	&operator=	(const Character &rhs);

		const std::string &getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif