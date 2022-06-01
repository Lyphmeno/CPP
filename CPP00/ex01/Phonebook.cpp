/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:19:38 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/01 18:14:57 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : _index(0) {}

void	Phonebook::fill(std::string fn, std::string ln, std::string nc, std::string pn, std::string ds)
{
	if (this->_index >= 7)
		this->_index %= 7;
	this->_contacts[_index].set_id(this->_index);
	this->_contacts[_index].set_firstname(fn);
	this->_contacts[_index].set_lastname(ln);
	this->_contacts[_index].set_nickname(nc);
	this->_contacts[_index].set_phone(pn);
	this->_contacts[_index].set_secret(ds);
	this->_index++;
}

void	Phonebook::set_contact()
{
	std::string fn, ln, nc, pn, ds;
	std::cout << "first name = "; std::cin >> fn;
	std::cout << "last name = "; std::cin >> ln;
	std::cout << "nickname = "; std::cin >> nc;
	std::cout << "phone number = "; std::cin >> pn;
	std::cout << "darkest secret = "; std::cin >> ds;
	fill(fn, ln, nc, pn, ds);
	std::cout << nc << " was added in Phonebook" << std::endl; 
}

void	Phonebook::show_index(int i)
{
	if (i < 0 || i > 7)
		std::cout << "The contact you're asking for does not exist" << std::endl;
	else if (this->_contacts[i].get_id() != -1)
	{
		std::cout << this->_contacts[i].get_firstname() << std::endl;
		std::cout << this->_contacts[i].get_lastname() << std::endl;
		std::cout << this->_contacts[i].get_nickname() << std::endl;
		std::cout << this->_contacts[i].get_phone() << std::endl;
		std::cout << this->_contacts[i].get_secret() << std::endl;
	}
}

std::string	Phonebook::trunc(std::string str) const
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Phonebook::showone(int i)
{
	std::cout << std::setw(10) << this->_contacts[i].get_id() << "|";
	std::cout << std::setw(10) << this->_contacts[i].get_firstname() << "|";
	std::cout << std::setw(10) << this->_contacts[i].get_lastname() << "|";
	std::cout << std::setw(10) << this->_contacts[i].get_nickname() << std::endl;
}

void	Phonebook::show_all()
{
	int	i = 0;

	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	while (this->_contacts[i].get_id() != -1)
		showone(i++);
}
