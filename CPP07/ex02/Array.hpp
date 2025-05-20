/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:16:08 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/20 11:47:08 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T *_array;

	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &other);
		Array &operator=(const Array &other);

		unsigned int const &size() const;
		T &operator[](unsigned int index);

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Index is out of array's bounds");
				}
		};
};

template <typename T>
void ft_print(Array<T> &array) {
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << std::endl;
}

template <typename T>
bool ft_compare(Array<T> &arr1, Array<T> &arr2, unsigned int size) {
    for (unsigned int i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            return (false);
        }
    }
    return (true);
}

# include "Array.tpp"

#endif