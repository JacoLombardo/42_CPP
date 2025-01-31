/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:25:35 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 12:02:04 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "[Animal] " << type << " was created!" << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
	std::cout << "[Animal] " << type << " was created!" << std::endl;
}
Animal::~Animal()
{
	std::cout << "[Animal] " << type << " was destroyed!" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "[Animal] " << type << " is making animal sounds!" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
