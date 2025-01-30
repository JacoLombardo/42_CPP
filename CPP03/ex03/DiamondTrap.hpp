/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:05:37 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 15:14:28 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
    std::string name;
    std::string clapTrapName;
    using ScavTrap::
    

  public:
	/* Default constructor */
	DiamondTrap();
	/* Name constructor */
	DiamondTrap(std::string name);
	/* Destructor */
	~DiamondTrap();

	/* Member functions */
    void whoAmI();
};


#endif