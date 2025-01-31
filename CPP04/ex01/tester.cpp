/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:22:16 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 14:06:35 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	delete i;
	delete j;

	std::cout << std::endl << std::endl;

	const Animal	*array[10];
	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << ": ";
		array[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		std::cout << i + 1 << ": ";
		array[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << ": ";
		delete array[i];
	}
	return (0);
}
