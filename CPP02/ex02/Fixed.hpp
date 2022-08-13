/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:13:38 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/13 09:43:11 by hlevi            ###   ########.fr       */
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
		Fixed	&operator ++ ();
		Fixed	operator ++ (int);
		Fixed	&operator -- ();
		Fixed	operator -- (int);
		Fixed	operator + (const Fixed &rhs) const;
		Fixed	operator - (const Fixed &rhs) const;
		Fixed	operator * (const Fixed &rhs) const;
		Fixed	operator / (const Fixed &rhs) const;
		bool	operator == (const Fixed &rhs) const;
		bool	operator != (const Fixed &rhs) const;
		bool	operator <= (const Fixed &rhs) const;
		bool	operator >= (const Fixed &rhs) const;
		bool	operator < (const Fixed &rhs) const;
		bool	operator > (const Fixed &rhs) const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;
		static Fixed	min(Fixed &fp1, Fixed &fp2);
		static Fixed	min(const Fixed &fp1, const Fixed &fp2);
		static Fixed	max(Fixed &fp1, Fixed &fp2);
		static Fixed	max(const Fixed &fp1, const Fixed &fp2);
};

std::ostream	&operator<<(std::ostream &val, const Fixed &fixed);

#endif