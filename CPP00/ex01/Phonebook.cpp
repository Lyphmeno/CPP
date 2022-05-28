/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:19:38 by hlevi             #+#    #+#             */
/*   Updated: 2022/04/12 14:39:27 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : _nb(0), _index(0) {
	this->_contacts = new Contact[8];
}

void	Phonebook::fill(std::string fn, std::string ln, std::string nc,
			std::string pn, std::string ds)
{
	if (this->_index >= 8)
		this->_index %= 8;
	if (this->_nb < 8)
		this->_nb++;
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
	std::cout << fn << "added in Phonebook" << std::endl; 
}
