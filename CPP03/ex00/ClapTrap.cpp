/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:44:48 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 10:27:18 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Default constructor */
ClapTrap::ClapTrap() : name("Gianni"), hitPoints(10), energyPoints(10),
	attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
};

/* Name constructor */
ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10),
	energyPoints(10), attackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
};

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
};

/* Member functions */
void	ClapTrap::attack(const std::string &target)
{
    if (hitPoints > 0)
    {
        if (energyPoints > 0)
        {
            std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
            energyPoints -= 1;
        }
        else
            std::cout << "ClapTrap " << name << " doesn't have enough energy to attack!" << std::endl;
    }
        
}
void	ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0)
    {
        std::cout << "ClapTrap " << name << " takes damage, losing " << amount << " hit points!" << std::endl;
        hitPoints -= amount;
        if (hitPoints <= 0)
        {
            std::cout << "ClapTrap " << name << " is dead!" << std::endl;
            hitPoints = 0;
        }
    }
}
void	ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints > 0)
    {
        if (energyPoints > 0)
        {
            std::cout << "ClapTrap " << name << " is repaired, gaining " << amount << " hit points!" << std::endl;
            energyPoints -= 1;
            hitPoints += amount;
        }
        else
            std::cout << "ClapTrap " << name << " doesn't have enough energy to be repaired" << std::endl;
    }
}
void    ClapTrap::status(void)
{
    std::cout << "ClapTrap " << name << " has " << hitPoints << " hit points, " << energyPoints << " energy points and "<< attackDamage << " attack damage."<< std::endl;
}
