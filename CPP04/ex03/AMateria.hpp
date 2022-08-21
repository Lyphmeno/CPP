/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:51:40 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 16:15:07 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &cpy);
		virtual	~AMateria() = 0;
		AMateria	&operator=(const AMateria &rhs);

		std::string	const&getType() const;

		virtual	AMateria	*clone() const = 0;
		virtual	void		use(ICharacter &target) = 0;
};
