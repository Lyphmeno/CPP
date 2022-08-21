/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 15:54:11 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		std::string	type;
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &cpy);
		~Ice();
		Ice	&operator=(const Ice &rhs);

		std::string	const&getType() const;

		virtual Ice		*clone() const;
		virtual void	use(ICharacter &target);
};
