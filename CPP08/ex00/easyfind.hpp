/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:47:34 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/28 14:56:45 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <list>

class NoOccurenceException : public std::exception
{
	public:
		virtual const char* what() const throw() {
			return ("Occurence not found!");
		}
};

template <typename T>
void	easyfind(T &list, int nb)
{
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
		if (*it == nb)
		{
			std::cout << "Occurence found!" << std::endl;
			return ;
		}
    }
	throw NoOccurenceException();
}

#endif