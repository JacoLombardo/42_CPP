/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:06 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 11:54:54 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "[Cat] " << type << " was created!" << std::endl;
    brain = new Brain();
}
Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "[Cat] " << type << " was created!" << std::endl;
    brain = new Brain();
}
Cat::~Cat()
{
    delete brain;
    std::cout << "[Cat] " << type << " was destroyed!" << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "[Cat] Copy constructor for type " << type << " was called!" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::type = other.type;
		*brain = *other.brain;
	}
	std::cout << "[Cat] Copy assignment operator for type " << type << " was created!" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "[Cat] " << type << " is purring!" << std::endl;
}