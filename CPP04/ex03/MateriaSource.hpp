/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:21:34 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/21 15:54:43 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

#define	slot 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*mSource[slot];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		virtual ~MateriaSource();
		MateriaSource &operator= (const MateriaSource &rhs);

		virtual void learnMateria(AMateria*);
		virtual AMateria *createMateria(std::string const &type);
};
