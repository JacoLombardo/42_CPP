/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:35:30 by jalombar          #+#    #+#             */
/*   Updated: 2025/06/06 09:54:26 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <iomanip>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack &other);

		typedef typename std::stack<T>::container_type Container;
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator begin();
		iterator end();
    	const_iterator begin() const;
    	const_iterator end() const;
    	reverse_iterator rbegin();
    	reverse_iterator rend();
    	const_reverse_iterator rbegin() const;
    	const_reverse_iterator rend() const;
};

# include "MutantStack.tpp"

#endif