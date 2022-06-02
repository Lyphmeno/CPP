/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:18:35 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/02 12:59:48 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	Phonebook
{
	private :
		int		_index;
		Contact	_contacts[8];
	public	:
		Phonebook();
		void	fill(std::string, std::string, std::string, std::string, std::string);
		void	set_contact();
		void	show_index(int);
		void	showone(int);
		void	show_all();
		std::string	trunc(std::string) const;
};

#endif
