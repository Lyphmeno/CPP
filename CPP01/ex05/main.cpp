/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:41:30 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/03 14:42:34 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	testKaren;

	testKaren.complain("DEBUG");
	testKaren.complain("INFO");
	testKaren.complain("WARNING");
	testKaren.complain("ERROR");
	return (0);
}
