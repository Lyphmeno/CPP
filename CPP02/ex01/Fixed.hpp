/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:13:38 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/13 09:36:35 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fpvalue;
		const static int	_stock;
	public:
		Fixed();
		Fixed(const Fixed &fp);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();
		Fixed	&operator = (const Fixed &fp);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;
};

std::ostream	&operator<<(std::ostream &val, const Fixed &fixed);

#endif