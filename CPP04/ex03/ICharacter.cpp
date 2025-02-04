/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:15:12 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 14:44:31 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() : name("Unnamed")
{
	std::cout << "[ICharacter] Default constructor called!" << std::endl;
}
ICharacter::ICharacter(std::string &name) : name(name)
{
	std::cout << "[ICharacter] " << name << " was created!" << std::endl;
}
ICharacter::~ICharacter()
{
	std::cout << "[ICharacter] destructor called!" << std::endl;
}
ICharacter::ICharacter(const ICharacter &other) : name(other.name)
{
	for (int i = 0; other.inventory[i]; i++)
	{
		inventory[i] = other.inventory[i].clone();
	}
	std::cout << "[ICharacter] " << name << " was created with copy constructor!" << std::endl;
}
ICharacter &ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
		{
            if (inventory[i])
                delete inventory[i];
			if (other.inventory[i])
				inventory[i] = other.inventory[i].clone();
		}
	}
	std::cout << "[ICharacter] Copy assignment operator called!" << std::endl;
	return (*this);
}
