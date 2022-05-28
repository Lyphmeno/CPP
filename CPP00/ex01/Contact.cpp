/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:20:08 by hlevi             #+#    #+#             */
/*   Updated: 2022/04/12 13:19:27 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_id = -1;
	this->_first_name = "NULL";
	this->_last_name = "NULL";
	this->_nickname = "NULL";
	this->_phone = "NULL";
	this->_secret = "NULL";
}

int	Contact::get_id() { return (this->_id); }

std::string Contact::get_firstname() { return (this->_first_name); }

std::string Contact::get_lastname() { return (this->_last_name); }

std::string Contact::get_nickname() { return (this->_nickname); }

std::string Contact::get_phone() { return (this->_phone); }

std::string Contact::get_secret() { return (this->_secret); }

int		Contact::set_id(int	nb) {
	this->_id = nb;
}

void	Contact::set_firstname(std::string str) {
	this->_first_name = str;
}

void	Contact::set_lastname(std::string str) {
	this->_last_name = str;
}

void	Contact::set_nickname(std::string str) {
	this->_nickname = str;
}

void	Contact::set_phone(std::string str) {
	this->_phone = str;
}

void	Contact::set_secret(std::string str) {
	this->_secret = str;
}
