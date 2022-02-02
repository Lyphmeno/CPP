/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:59:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/02 14:52:44 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon		&weaponA;
	public:
		HumanA(std::string name, Weapon &weaponA);
		~HumanA();
		Weapon	&getWeapon(void) const;
		void	attack(void);
};

#endif