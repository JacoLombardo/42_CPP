/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:06 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 10:57:46 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "[Cat] " << type << " was created!" << std::endl;
    brain = new Brain();
}
Cat::Cat(std::string type) : AAnimal(type)
{
    std::cout << "[Cat] " << type << " was created!" << std::endl;
    brain = new Brain();
}
Cat::~Cat()
{
    delete brain;
    std::cout << "[Cat] " << type << " was destroyed!" << std::endl;
}

/* Copy constructor */
Cat::Cat(const Cat &other)
{
	std::cout << "[Cat] " << type << " was created!" << std::endl;
	type = other.type;
}

/* Copy assignment operator */
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "[Cat] " << type << " has called copy assignment operator!" << std::endl;
	if (this != &other)
		type= other.type;
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "[Cat] " << type << " is purring!" << std::endl;
}