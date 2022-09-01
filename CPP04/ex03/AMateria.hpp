/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:51:40 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/01 11:30:28 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

#define LOG 0

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &cpy);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &rhs);

		std::string const &getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif