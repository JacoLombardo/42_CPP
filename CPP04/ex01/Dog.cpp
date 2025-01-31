/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:11 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 14:04:35 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "[Dog] " << type << " was created!" << std::endl;
    brain = new Brain;
}
Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "[Dog] " << type << " was created!" << std::endl;
    brain = new Brain;
}
Dog::~Dog()
{
    delete brain;
    std::cout << "[Dog] " << type << " was destroyed!" << std::endl;
}

/* Copy constructor */
Dog::Dog(const Dog &other)
{
	std::cout << "[Dog] " << type << " was created!" << std::endl;
	type = other.type;
}

/* Copy assignment operator */
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "[Dog] " << type << " has called copy assignment operator!" << std::endl;
	if (this != &other)
		type= other.type;
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "[Dog] " << type << " is yelping!" << std::endl;
}
