/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:16:08 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/19 14:26:05 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <cstdlib>
template <typename T>
class Array
{
	private:
		unsigned int _size;
		T _array[];

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

# include "Array.tpp"

#endif