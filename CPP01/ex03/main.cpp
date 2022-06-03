/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:55:02 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 17:13:46 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	// HumanA who has the weapon in his class
	Weapon	club = Weapon("crude spiked club");
	HumanA	Ed("Ed", club);
	Ed.attack();
	club.setType("some other type of club");
	Ed.attack();

	// HumanB who needs to set a Weapon
	Weapon	club2 = Weapon("crude spiked club");
	HumanB	Shaun("Shaun");
	Shaun.attack();
	Shaun.setWeapon(club2);
	Shaun.attack();
	club2.setType("some other type of club");
	Shaun.attack();
}
