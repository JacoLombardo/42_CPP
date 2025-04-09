/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:05:25 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 12:30:13 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Default constructor */
DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name"), ScavTrap(), FragTrap()
{
	name = "Unnamed";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

/* Name constructor */
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " was created!" << std::endl;
}
/* Default destructor */
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " was destroyed!" << std::endl;
}
/* Copy Constructor */
DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
    std::cout << "DiamondTrap copy constructor called!" << std::endl;
}

/* Copy Assignment Operator */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
	{
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
    }
    std::cout << "DiamondTrap assignment operator called!" << std::endl;
    return (*this);
}

/* Member functions */
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (hitPoints > 0)
	{
		std::cout << "DiamondTrap I am " << name <<
            ", grandson of " << ClapTrap::name << "!" << std::endl;
	}
	else
		std::cout << "DiamondTrap " << name <<
            " is dead, so it cannot introduce itself!"
                << std::endl;
}
