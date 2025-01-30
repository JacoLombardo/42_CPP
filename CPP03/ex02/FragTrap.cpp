/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:53:23 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 12:02:40 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Default constructor */
FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

/* Name constructor */
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

/* Default destructor */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

/* Member functions */
void FragTrap::highFivesGuys()
{
	if (hitPoints > 0)
	{
		std::cout << "FragTrap " << name <<
            " requests a positive high five! ✋😃!" << std::endl;
	}
	else
		std::cout << "FragTrap " << name <<
            " is dead, so it cannot request a positive high five! ✋😃!"
                << std::endl;
}
