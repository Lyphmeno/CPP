/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:52 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 15:54:07 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		std::string	type;
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &cpy);
		~Cure();
		Cure	&operator=(const Cure &rhs);

		std::string	const&getType() const;

		virtual Cure	*clone() const;
		virtual void	use(ICharacter &target);
};
