/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:18:35 by hlevi             #+#    #+#             */
/*   Updated: 2022/04/12 14:32:18 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	Phonebook
{
	private :
		int		_nb;
		int		_index;
		Contact	*_contacts;

	public	:
		Phonebook();
		void	fill(std::string, std::string, std::string, std::string, std::string);
		void	set_contact();
		void	show_index(int) const;
		void	show_all() const;
		std::string	trunc(std::string) const;
};

#endif
