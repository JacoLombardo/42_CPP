/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:13:14 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/28 14:13:14 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 3

int	main(int, char **)
{
	{
		std::cout << "Creating array and mirror" << std::endl;
		Array<int> numbers(MAX_VAL);
		int *mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		std::cout << "Array:" << std::endl;
		ft_print(numbers);
		std::cout << "Mirror:" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << mirror[i] << std::endl;
		std::cout << std::endl;
		{
			std::cout << "Testing copy assignment operator" << std::endl;
			Array<int> tmp(MAX_VAL);
			tmp = numbers;
			std::cout << (ft_compare(numbers, tmp,
					(unsigned int)MAX_VAL) ? "Copy successful" : "Copy failed") << std::endl << std::endl;
			std::cout << "Testing deep copy" << std::endl;
			tmp[1] = 2;
			std::cout << (ft_compare(numbers, tmp,
					(unsigned int)MAX_VAL) ? "Compare still successful, elements are not deep copied" : 
						"Compare failed, elements are deep copied") << std::endl << std::endl;
			std::cout << "Testing copy constructor" << std::endl;
			Array<int> test(tmp);
			std::cout << (ft_compare(test, tmp,
					(unsigned int)MAX_VAL) ? "Copy successful" : "Copy failed") << std::endl << std::endl;
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return (1);
			}
		}
		std::cout << std::endl << "Testing for out-of-bounds indexes" << std::endl;
		try {
			numbers[-2] = 0;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			numbers[MAX_VAL] = 0;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		for (int i = 0; i < MAX_VAL; i++)
			numbers[i] = rand();
		delete[] mirror;
	}
	return (0);
}