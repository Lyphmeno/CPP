/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:34:32 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/20 14:27:51 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = "empty";
		i++;
	}
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = cpy._ideas[i];
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=	(const Brain &rhs)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = rhs._ideas[i];
		i++;
	}
	return (*this);
}

std::string	*Brain::operator[](const int index)
{
	if (index >= 0 && index < 100)
		return (&(this->_ideas[index]));
	return (NULL);
}
