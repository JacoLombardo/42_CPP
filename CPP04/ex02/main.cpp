/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:41:07 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 12:29:49 by jalombar         ###   ########.fr       */
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

	Dog *doggo = new Dog();
	Dog *doggo2 = new Dog(*doggo);
	delete doggo;
	delete doggo2;

	std::cout << std::endl << std::endl;

	const AAnimal	*array[10];
	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << ": " << std::endl;
		array[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 5; i < 10; i++)
	{
		std::cout << i + 1 << ": " << std::endl;
		array[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << ": " << std::endl;
		delete array[i];
		std::cout << std::endl;
	}
	return (0);
}
