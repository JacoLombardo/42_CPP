/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:05:25 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 16:48:18 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Default constructor */
DiamondTrap::DiamondTrap() : ClapTrap("Guido_clap_name"), ScavTrap(), FragTrap()
{
	name = "Guido";
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
	std::cout << "DiamondTrap name constructor called" << std::endl;
}
/* Default destructor */
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

/* Assignation operator */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	name = other.name + "_clap_trap";
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return (*this);
}

/* Member functions */
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
