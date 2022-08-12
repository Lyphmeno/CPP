/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:23:21 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/12 12:00:57 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ClapTrap	trap("Kreig");
	ScavTrap	scav;

	std::cout << "First one name is " << clap.getName() << std::endl;
	clap.setAd(2);
	clap.attack("Kreig");
	trap.takeDamage(clap.getAd());
	trap.beRepaired(3);
	trap.setAd(15);
	trap.attack("Cl4p-Tp");
	clap.takeDamage(trap.getAd());
	std::cout << "End of First Tests\n" << std::endl;

	scav.setName("Sc4v");
	std::cout << "ScavTrap " << scav.getName() << std::endl;
	scav.guardGates();
	return (0);
}
