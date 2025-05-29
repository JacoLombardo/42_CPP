/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:16:34 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/29 14:28:05 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<unsigned int> _container;
		unsigned int _max_size;

	public:
		Span();
		Span(unsigned int size);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

		void addNumber(unsigned int nb);
		void fillUp();
		void printAll();
		unsigned int getSmallest();
		unsigned int getBiggest();
		unsigned int shortestSpan();
		unsigned int longestSpan();

		template <typename RangeIterator>
		void addNumbers(RangeIterator begin, RangeIterator end)
		{
			for (; begin != end; ++begin) {
				if (_container.size() >= _max_size)
					throw MaxSizeReachedException();
				_container.push_back(*begin);
			}
		}

		class MaxSizeReachedException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Max size already reached!");
				}
		};

		class NotEnoughElementsException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Not enought elements in the container to have a span!");
				}
		};
};

#endif