/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:23:21 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/19 16:51:34 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ClapTrap	trap("Kreig");
	ScavTrap	scav("Lilith");
	FragTrap	frag("Mordecai");
	DiamondTrap	diamond("Athena");

	std::cout << std::endl;
	std::cout << "ClapTrap " << clap.getName() << " just spawned" << std::endl;
	std::cout << clap.getName() << " has :" << std::endl;
	std::cout << "- " << clap.getHp() << "Hp" << std::endl;
	std::cout << "- " << clap.getEp() << "Ep" << std::endl;
	std::cout << "- " << clap.getAd() << "Ad" << std::endl;
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
	std::cout << scav.getName() << " has :" << std::endl;
	std::cout << "- " << scav.getHp() << "Hp" << std::endl;
	std::cout << "- " << scav.getEp() << "Ep" << std::endl;
	std::cout << "- " << scav.getAd() << "Ad" << std::endl;
	scav.guardGates();
	std::cout << std::endl;

	std::cout << "FragTrap " << frag.getName() << " just spawned" << std::endl;
	std::cout << frag.getName() << " has :" << std::endl;
	std::cout << "- " << frag.getHp() << "Hp" << std::endl;
	std::cout << "- " << frag.getEp() << "Ep" << std::endl;
	std::cout << "- " << frag.getAd() << "Ad" << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "DiamondTrap " << diamond.getName() << " just spawned" << std::endl;
	std::cout << diamond.getName() << " has :" << std::endl;
	std::cout << "- " << diamond.getHp() << "Hp" << std::endl;
	std::cout << "- " << diamond.getEp() << "Ep" << std::endl;
	std::cout << "- " << diamond.getAd() << "Ad" << std::endl;
	diamond.whoAmI();
	std::cout << std::endl;
	return (0);
}
