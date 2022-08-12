/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:23:21 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/12 14:54:33 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ClapTrap	trap("Kreig");
	ScavTrap	scav("Lilith");
	FragTrap	frag("Mordecai");

	std::cout << std::endl;
	std::cout << "First one name is " << clap.getName() << std::endl;
	std::cout << "Kreig has " << trap.getHp() << "Hp" << std::endl;
	clap.attack("Kreig");
	trap.takeDamage(clap.getAd());
	trap.beRepaired(3);
	trap.setAd(150);
	trap.attack("Cl4p-Tp");
	clap.takeDamage(trap.getAd());
	clap.beRepaired(5);
	std::cout << std::endl;

	scav.setName("Sc4v");
	std::cout << "ScavTrap " << scav.getName() << " just spawned" << std::endl;
	std::cout << scav.getName() << " has " << scav.getHp() << "Hp" << std::endl;
	scav.guardGates();
	std::cout << std::endl;

	std::cout << "FragTrap " << frag.getName() << " just spawned" << std::endl;
	std::cout << frag.getName() << " has " << frag.getHp() << "Hp" << std::endl;
	frag.highFivesGuys();

	std::cout << std::endl;
	return (0);
}
