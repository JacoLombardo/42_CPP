/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:01 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 12:23:05 by jalombar         ###   ########.fr       */
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

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[WrongAnimal] " << type << " is sobbing!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
