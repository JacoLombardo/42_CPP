/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:55:27 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 13:52:37 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "messages.hpp"

Character::Character() : name("Unnamed")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	if (messages)
		std::cout << "[Character] Default constructor called!" << std::endl;
}
Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	if (messages)
		std::cout << "[Character] " << name << " was created!" << std::endl;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	if (messages)
		std::cout << "[Character] Destructor called!" << std::endl;
}
Character::Character(const Character &other) : name(other.name)
{
	for (int i = 0; i < 4; i++)
	{
        if (other.inventory[i])
		    inventory[i] = (*other.inventory[i]).clone();
        else
            inventory[i] = NULL;
	}
	if (messages)
	    std::cout << "[Character] " << name << " was created with copy constructor!" << std::endl;
}
Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
		{
            if (inventory[i])
                delete inventory[i];
			if (other.inventory[i])
				inventory[i] = (*other.inventory[i]).clone();
		}
	}
	if (messages)
	    std::cout << "[Character] Copy assignment operator called!" << std::endl;
	return (*this);
}

AMateria *Character::getInventory(int i)
{
    AMateria *temp = inventory[i];
    return (temp);
}
std::string const &Character::getName() const
{
    return (name);
}
void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
	std::cout << "[Character] Inventory of " << name << " is full!" << std::endl;
}
void Character::unequip(int idx)
{
    inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
    AMateria *selected = inventory[idx];
    if (selected)
        (*selected).use(target);
}