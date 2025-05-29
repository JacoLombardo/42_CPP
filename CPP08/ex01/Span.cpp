/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:18:10 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/29 14:27:36 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max_size(5)
{
	std::cout << "[Span] Span of size " << _max_size << " created." << std::endl;
}

Span::Span(unsigned int max_size) : _max_size(max_size)
{
	std::cout << "[Span] Span of size " << _max_size << " created." << std::endl;
}

Span::~Span()
{
	std::cout << "[Span] Span destroyed." << std::endl;
}

Span::Span(const Span &other) : _max_size(other._max_size)
{
	_container = other._container;
	std::cout << "[Span] Copy constructor called." << std::endl;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_max_size = other._max_size;
		_container = other._container;
	}
	std::cout << "[Span] Copy assignment operator called." << std::endl;
	return (*this);
}

void Span::addNumber(unsigned int nb)
{
	if (_container.size() < _max_size)
		_container.push_back(nb);
	else
		throw MaxSizeReachedException();
}

void Span::fillUp()
{
	for (size_t i = 0;(_container.size() < _max_size) && (i < _max_size); ++i) {
        _container.push_back(std::rand());
    }
}

void Span::printAll()
{
	for (std::vector<unsigned int>::iterator it = _container.begin(); it != _container.end(); ++it) {
		std::cout << *it << std::endl;
    }
}

unsigned int Span::getSmallest()
{
	unsigned int min;
	min = _container[0];
	for (std::vector<unsigned int>::iterator it = _container.begin(); it != _container.end(); ++it) {
		if (*it < min)
			min = *it;
    }
	return (min);
}

unsigned int Span::getBiggest()
{
	unsigned int max;
	max = _container[0];
	for (std::vector<unsigned int>::iterator it = _container.begin(); it != _container.end(); ++it) {
		if (*it > max)
			max = *it;
    }
	return (max);
}

unsigned int Span::shortestSpan()
{
	if (_container.size() > 1)
	{
		std::vector<unsigned int> vector = _container;
		std::sort(vector.begin(), vector.end()); 
		unsigned int span = vector[1] - vector[0];
		for (size_t i = 1; i < vector.size(); i++)
		{
			if ((vector[i] - vector[i - 1]) < span)
				span = vector[i] - vector[i - 1];
		}
		return (span);
	}
	else
		throw NotEnoughElementsException();
}

unsigned int Span::longestSpan()
{
	if (_container.size() > 1)
		return (getBiggest() - getSmallest());
	else
		throw NotEnoughElementsException();
}

