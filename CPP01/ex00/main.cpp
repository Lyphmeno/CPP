/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:25:36 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/01 17:23:14 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Allocation on stack with randomChump
	randomChump("The witch");

	// Allocation on the heap with new and then delete
	Zombie *boomer = newZombie("The boomer");
	boomer->announce();
	delete boomer;
	return (0);
}
