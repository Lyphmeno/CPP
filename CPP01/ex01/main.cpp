/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:49:10 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/01 18:10:30 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *meepHorde = zombieHorde(5, "Meep");
	for (int i = 0; i < 5; i++)
		meepHorde[i].announce();
	delete[] meepHorde;
	return (0);
}
