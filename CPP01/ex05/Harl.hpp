/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:41:32 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/03 17:45:04 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
# include <iostream>
# include <string>

class Harl
{
	private:
		void	debug()
		{
			std::cout << "[DEBUG] I love to get extra bacon" << std::endl;
		}
		void	info()
		{
			std::cout << "[INFO] I cannot believe adding extra bacon cost more money" << std::endl;
		}
		void	warning()
		{
			std::cout << "[WARNING] I think I deserve to have some extra bacon for free" << std::endl;
		}
		void	error()
		{
			std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now?" << std::endl;
		}
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif