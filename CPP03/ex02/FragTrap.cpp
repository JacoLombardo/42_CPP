/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:53:23 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:56:49 by jalombar         ###   ########.fr       */
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
/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
/* Copy Constructor */
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called!" << std::endl;
}
/* Copy Assignment Operator */
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap assignment operator called!" << std::endl;
    return *this;
}

/* Member functions */
void FragTrap::highFivesGuys()
{
	if (hitPoints > 0)
	{
		std::cout << "FragTrap " << name <<
            " requests a positive high five! ✋😃" << std::endl;
	}
	else
		std::cout << "FragTrap " << name <<
            " is dead, so it cannot request a positive high five!"
                << std::endl;
}
