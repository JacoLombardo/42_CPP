/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:25:35 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 14:06:46 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "[AAnimal] " << type << " was created!" << std::endl;
}
AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "[AAnimal] " << type << " was created!" << std::endl;
}
AAnimal::~AAnimal()
{
	std::cout << "[AAnimal] " << type << " was destroyed!" << std::endl;
}
AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
	std::cout << "[AAnimal] Copy constructor for type " << type << " was called!" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[AAnimal] Copy assignment operator for type " << type << " was created!" << std::endl;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (type);
}
