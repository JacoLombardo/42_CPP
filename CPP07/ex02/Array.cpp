/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:19:43 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/19 14:24:40 by jalombar         ###   ########.fr       */
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
	for (int i = 0; _array[i]; i++)
		std::cout << _array[i] << std::endl;
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
	_array = new T[_size];
	for (int i = 0; i < _size; i++)
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
		for (int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	}
	std::cout << "[Form] Copy assignment operator called." << std::endl;
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

/* template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &object)
{
    os << object;
    return (os);
} */
