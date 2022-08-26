/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:21:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/26 13:55:19 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(const std::string &newName);
		FragTrap(const FragTrap &cpy);
		~FragTrap();
		FragTrap	&operator= (const FragTrap &rhs);
		void	highFivesGuys();
};
