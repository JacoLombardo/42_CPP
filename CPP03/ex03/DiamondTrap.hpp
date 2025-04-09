/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:05:37 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 12:02:23 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	std::string name;

  public:
	/* Default constructor */
	DiamondTrap();
	/* Name constructor */
	DiamondTrap(std::string name);
	/* Destructor */
	~DiamondTrap();
	/* Copy constructor */
	DiamondTrap(const DiamondTrap &other);
	/* Copy assignment operator */
	DiamondTrap &operator=(const DiamondTrap &other);

	/* Member functions */
	void attack(const std::string &target);
	void whoAmI();
};

#endif