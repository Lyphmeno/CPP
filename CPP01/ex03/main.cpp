/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:55:02 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/02 15:22:46 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	// HumanA who has the weapon in his class
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	// HumanB who needs to set a Weapon
	Weapon	club2 = Weapon("crude spiked club");
	HumanB	jim("Jim");
	jim.setWeapon(club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();
}
