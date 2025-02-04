/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:11 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 13:46:55 by jalombar         ###   ########.fr       */
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
Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor for type " << type << " was called!" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[Dog] Copy assignment operator for type " << type << " was created!" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "[Dog] " << type << " is yelping!" << std::endl;
}
