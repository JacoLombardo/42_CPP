/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:26:18 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/20 11:23:03 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0)
{
	_array = new T[]();
	std::cout << "[Array] Empty array created." << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n]();
	std::cout << "[Array] Array of size " << n << " created." << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
	std::cout << "[Array] Array destroyed." << std::endl;
}

template <typename T>
Array<T>::Array(const Array &other) : _size(other._size)
{
	_array = new T[_size]();
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
	std::cout << "[Array] Copy Constructor called." << std::endl;
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] _array;
		_size = other._size;
		_array = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	}
	std::cout << "[Array] Copy assignment operator called." << std::endl;
	return (*this);
}

template <typename T>
unsigned int const &Array<T>::size() const
{
	return (_size);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size|| index < 0)
		throw Array<T>::OutOfBoundsException();
	return (_array[index]);
}
