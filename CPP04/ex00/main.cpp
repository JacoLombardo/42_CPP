/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:41:07 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 14:14:58 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*animal = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

    delete animal;
    delete dog;
    delete cat;

    const WrongAnimal    *wrong_animal = new WrongAnimal();
    const WrongAnimal    *wrong_cat = new WrongCat();
    wrong_cat->makeSound();
	wrong_animal->makeSound();

    delete wrong_animal;
    delete wrong_cat;

	return (0);
}
