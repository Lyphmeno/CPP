/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:21:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/20 11:36:36 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &newName);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap();
		ScavTrap	&operator= (const ScavTrap &rhs);
		void		attack(const std::string &target);
		void		guardGates();
};