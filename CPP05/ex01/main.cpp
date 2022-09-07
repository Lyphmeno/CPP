/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/07 13:01:46 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* bureaucrat = new Bureaucrat("Cronos", 2);
    Bureaucrat* stagiaire = new Bureaucrat("Rhea", 149);

    try
    {
        std::cout << *bureaucrat;
        bureaucrat->promote();
        std::cout << *bureaucrat;
        bureaucrat->promote();
        std::cerr << "Exception ERROR " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }

    try
    {
        std::cout << *stagiaire;
        stagiaire->demote();
        std::cout << *stagiaire;
        stagiaire->demote();
        std::cerr << "Exception ERROR " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }

    Bureaucrat* toHigh;
    Bureaucrat* toLow;

    try
    {
        toHigh = new Bureaucrat("ToHigh", 0);
        std::cerr << "Exception ERROR " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }
    
    try
    {
        toLow = new Bureaucrat("ToLow", 420);
        std::cerr << "Exception ERROR " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }

    delete bureaucrat;
    delete stagiaire;
}