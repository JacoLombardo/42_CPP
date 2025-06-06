/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:34:50 by jalombar          #+#    #+#             */
/*   Updated: 2025/06/06 10:16:20 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	{
		std::cout << std::left;
		MutantStack<int> mstack;
		std::list<int> list;
		std::cout << std::setw(15) << "MutantStack"
					<< std::setw(15) << "List" << std::endl;
		mstack.push(5);
		mstack.push(17);
		list.push_back(5);
		list.push_back(17);
		std::cout << std::setw(15) << mstack.top()
					<< std::setw(15) << list.back() << std::endl;
		mstack.pop();
		list.pop_back();
		std::cout << std::setw(15) << mstack.size()
					<< std::setw(15) << list.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::list<int>::iterator it_list = list.begin();
		std::list<int>::iterator ite_list = list.end();
		++it;
		--it;
		++it_list;
		--it_list;
		while (it != ite || it_list != ite_list)
		{
			std::cout << std::setw(15) << *it
					<< std::setw(15) << *it_list << std::endl;
			++it;
			++it_list;
		}
		std::stack<int> s(mstack);
		std::stack<int, std::list<int> > l(list);
	}
	return (0);
}
