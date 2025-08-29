/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:42:00 by jalombar          #+#    #+#             */
/*   Updated: 2025/06/03 13:49:34 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::cout << "Creating a container (list) with: 5, 10, 15, 20" << std::endl << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(10);
	list.push_back(15);
	list.push_back(20);

	std::cout << "Testing for easyfind(list, 40)" << std::endl;
    try {
		easyfind(list, 40);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "Testing for easyfind(list, 5)" << std::endl;
    try {
		easyfind(list, 5);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "Testing for easyfind(list, 20)" << std::endl;
    try {
		easyfind(list, 20);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
 