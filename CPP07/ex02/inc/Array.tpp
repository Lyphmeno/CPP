/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:13:42 by hlevi             #+#    #+#             */
/*   Updated: 2022/10/12 15:59:02 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/////////////////////////////
// Coplien                 //
/////////////////////////////
template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
	if (LOG)
		std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &cpy) : _array(new T[cpy._size]), _size(cpy._size)
{
	if (LOG)
		std::cout << "Copy constructor called" << std::endl;
	for (unsigned int i = 0; i < _size; i++)
		this->_array[i] = cpy._array[i];
}

template <typename T>
Array<T>::~Array()
{
	if (LOG)
		std::cout << "Destructor called" << std::endl;
	if (this->_size > 0)
		delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &rhs)
{
	if (LOG)
		std::cout << "Operator= called" << std::endl;
	if (this == &rhs)
		return *this;
	if (this->_array != NULL)
		delete[] this->_array;
	this->_size = rhs.size();
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = rhs[i];
	return *this;
}

/////////////////////////////
// Assignation contructors //
/////////////////////////////
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	if (LOG)
		std::cout << "Assignation constructor called" << std::endl;
}

/////////////////////////////
// Getters                 //
/////////////////////////////
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Operators               //
/////////////////////////////
template <typename T>
T &Array<T>::operator[](const int index) const
{
	if ((unsigned int)index >= this->_size || index < 0)
		throw std::out_of_range("_array index out of range");
	return this->_array[index];
}

/////////////////////////////
// Methods                 //
/////////////////////////////
template <typename T>
int Array<T>::size() const
{
	return (this->_size);
}

/////////////////////////////
// Exceptions              //
/////////////////////////////