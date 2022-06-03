/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:25:36 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 15:59:45 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Allocation on stack with randomChump
	randomChump("Ed");

	// Allocation on the heap with new and then delete
	Zombie *Shaun = newZombie("Shaun");
	Shaun->announce();
	delete Shaun;
	return (0);
}
