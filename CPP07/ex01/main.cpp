/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:30:44 by jalombar          #+#    #+#             */
/*   Updated: 2025/06/03 13:52:08 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	{
		std::cout << "TESTING WITH INT ARRAY:" << std::endl;
		int array2[] = {1, 2, 3, 4};
		iter(array2, 4, testFunction<int>);
		std::cout << std::endl;
	}

	{
		std::cout << "TESTING WITH STRING ARRAY:" << std::endl;
		std::string array1[] = {"ciao", "come", "stai", "?"};
		iter(array1, 4, testFunction<std::string>);
		std::cout << std::endl;
	}
	return (0);
}