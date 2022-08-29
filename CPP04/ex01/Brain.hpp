/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:34:55 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/29 11:03:58 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain &cpy);
		~Brain();
		Brain &operator= (const Brain &rhs);

		void	setIdea(std::string newOne);

		void	getIdeas();

		std::string	*operator[](const int index);
};		
