/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:22:16 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 10:58:36 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const AAnimal	*j = new Dog();
	const AAnimal	*i = new Cat();
	delete i;
	delete j;

	std::cout << std::endl << std::endl;

	const AAnimal	*array[10];
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
