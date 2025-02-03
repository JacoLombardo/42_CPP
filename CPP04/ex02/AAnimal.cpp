/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:25:35 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 10:57:02 by jalombar         ###   ########.fr       */
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

void	AAnimal::makeSound(void) const
{
	std::cout << "[AAnimal] " << type << " is making animal sounds!" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}
