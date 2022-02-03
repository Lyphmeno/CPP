/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:18:43 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/03 14:28:52 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
# include <iostream>
# include <string>

class Karen
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
		Karen();
		~Karen();
		void	complain(std::string level);
};

#endif