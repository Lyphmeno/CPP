/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:13:38 by hlevi             #+#    #+#             */
/*   Updated: 2022/02/04 18:08:46 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fpvalue;
		static const int	bitFraction;
	public:
		Fixed();
		Fixed(const Fixed &fp);
		Fixed(int const intoBin);
		Fixed(float const floatoBin);
		~Fixed();
		Fixed	&operator = (const Fixed &fp);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;
};

std::ostream & operator<<(std::ostream & res, const Fixed & fixed);

#endif