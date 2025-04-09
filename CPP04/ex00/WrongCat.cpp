/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:26:56 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 13:29:39 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "[WrongCat] " << type << " was created!" << std::endl;
}
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "[WrongCat] " << type << " was created!" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] " << type << " was destroyed!" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy constructor for type " << type << " was called!" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "[WrongCat] Copy assignment operator for type " << type << " was created!" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "[WrongCat] " << type << " is barking!" << std::endl;
}
