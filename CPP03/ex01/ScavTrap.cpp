/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:37:56 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:58:35 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Default constructor */
ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

/* Name constructor */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}
/* Default destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
/* Copy Constructor */
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}
/* Copy Assignment Operator */
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap assignment operator called!" << std::endl;
    return *this;
}

/* Member functions */
void ScavTrap::attack(const std::string &target)
{
	if (hitPoints > 0)
	{
		if (energyPoints > 0)
		{
			std::cout << "ScavTrap " << name << " attacks " << target <<
                ", causing " << attackDamage << " points of damage!" << std::endl;
			energyPoints -= 1;
		}
		else
			std::cout << "ScavTrap " << name << " doesn't have enough energy to attack!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name <<
            " is dead, so it cannot attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (hitPoints > 0)
		std::cout << "ScavTrap " << name << " is now in now in Gate keeper mode!" << std::endl;

	else
		std::cout << "ScavTrap " << name <<
            " is dead, so it cannot go in Gate keeper mode!" << std::endl;
}
