/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:44:53 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/17 17:21:53 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::const_iterator easyfind(const T &container, int num)
{
	typedef typename T::const_iterator iter;
	iter i = container.begin();

	for (; i != container.end(); i++)
	{
		if (*i == num)
			return (i);
	}
	throw std::invalid_argument("Error : Value not found");
}