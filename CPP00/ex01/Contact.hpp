/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:18:33 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/02 13:08:09 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>

class Contact
{
	private	:
		int			_id;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
	public	:
		Contact();
		std::string get_firstname();
		std::string get_lastname();
		std::string get_nickname();
		std::string get_phone();
		std::string get_secret();
		int	get_id();
		void	set_firstname(std::string);
		void	set_lastname(std::string);
		void	set_nickname(std::string);
		void	set_phone(std::string);
		void	set_secret(std::string);
		void	set_id(int);
};
#endif
