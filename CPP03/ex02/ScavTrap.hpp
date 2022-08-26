/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:21:12 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/26 11:40:22 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(const std::string &newName);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap();
		ScavTrap	&operator= (const ScavTrap &rhs);
		void		attack(const std::string &target);
		void		guardGates();
};
