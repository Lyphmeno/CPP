/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:23:37 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/13 11:25:49 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_ad;
	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &cpy);
		virtual	~ClapTrap();
		ClapTrap	&operator= (const ClapTrap &rhs);
		std::string getName() const;
		int			getHp() const;
		int			getEp() const;
		int			getAd() const;
		void		setName(std::string newName);
		void		setHp(int newHp);
		void		setEp(int newEp);
		void		setAd(int newAd);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif