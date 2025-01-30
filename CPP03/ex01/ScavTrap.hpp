/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:38:05 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 11:28:21 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
  private:
	bool gateKeeperMode;

  public:
	/* Default constructor */
	ScavTrap();
	/* Name constructor */
	ScavTrap(std::string name);
	/* Destructor */
	~ScavTrap();

	/* Member functions */
	void attack(const std::string &target);
	void guardGate();
};

#endif