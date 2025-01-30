/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:05:25 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 12:29:07 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Default constructor */
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	name = "Guido";
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

/* Name constructor */
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

/* Default destructor */
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

/* Member functions */
void DiamondTrap::whoAmI()
{
	/* if (hitPoints > 0)
	{
		std::cout << "FragTrap " << name <<
            " requests a positive high five! ✋😃!" << std::endl;
	}
	else
		std::cout << "FragTrap " << name <<
            " is dead, so it cannot request a positive high five! ✋😃!"
                << std::endl; */
}
