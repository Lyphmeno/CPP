/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:19 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/05 14:58:58 by hlevi            ###   ########.fr       */
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
        std::cerr << "[+][1] Exception isn't working nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[1] Exception : " << e.what() << std::endl;
    }

    try
    {
        std::cout << *stagiaire;
        stagiaire->demote();
        std::cout << *stagiaire;
        stagiaire->demote();
        std::cerr << "[+][2] Exception isn't working nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[2] Exception : " << e.what() << std::endl;
    }

    Bureaucrat* tooHigh;
    Bureaucrat* tooLow;

    try
    {
        tooHigh = new Bureaucrat("TooHigh", 0);
        std::cerr << "[+][3] Exception isn't working nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[3] Exception : " << e.what() << std::endl;
    }
    
    try
    {
        tooLow = new Bureaucrat("TooLow", 420);
        std::cerr << "[+][4] Exception isn't working nicely. " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[4] Exception : " << e.what() << std::endl;
    }

    delete bureaucrat;
    delete stagiaire;
}