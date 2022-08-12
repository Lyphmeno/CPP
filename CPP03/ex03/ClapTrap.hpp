/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:23:37 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/12 17:09:50 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hp;
		int			ep;
		int			ad;
	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &trap);
		~ClapTrap();
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