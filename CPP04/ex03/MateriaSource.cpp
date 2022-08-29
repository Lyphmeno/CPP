/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:21:43 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 15:55:08 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	int	i;

	i = 0;
	while (i < slot)
	{
		this->mSource[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	int	i;

	i = 0;
	while (i < slot)
	{
		mSource[i] = (cpy.mSource[i]) ? cpy.mSource[i]->clone() : NULL;
		i++;
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	int	i;

	i = 0;
	while (i < slot)
	{
		if (this->mSource[i])
			delete this->mSource[i];
		i++;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	int	i;

	i = 0;
	while (i < slot)
	{
		if (this->mSource[i])
			delete this->mSource[i];
		this->mSource[i] = (rhs.mSource[i]) ? rhs.mSource[i]->clone() : NULL;
		i++;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *materia)
{
	int	i;

	i = 0;
	while (i < slot)
	{
		if (!this->mSource[i])
		{
			this->mSource[i] = materia->clone();
			return ;
		}
		i++;
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	int	i;

	i = 0;
	while (i < slot)
	{
		if (this->mSource[i]->getType() == type)
			return (this->mSource[i]->clone());
		i++;
	}
	return (NULL);
}