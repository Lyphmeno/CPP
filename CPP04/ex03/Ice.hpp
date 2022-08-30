/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:47 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/30 11:02:35 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice;

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &cpy);
		~Ice();
		Ice	&operator=(const Ice &rhs);

		std::string	const &getType() const;

		virtual Ice		*clone() const;
		virtual void	use(ICharacter &target);
};

#endif