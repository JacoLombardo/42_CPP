/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:01 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 13:29:33 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "[WrongAnimal] " << type << " was created!" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "[WrongAnimal] " << type << " was created!" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] " << type << " was destroyed!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "[WrongAnimal] Copy constructor for type " << type << " was called!" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[WrongAnimal] Copy assignment operator for type " << type << " was created!" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[WrongAnimal] " << type << " is sobbing!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
