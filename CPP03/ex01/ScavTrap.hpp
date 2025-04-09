/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:38:05 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:51:08 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
  private:

  public:
	/* Default constructor */
	ScavTrap();
	/* Name constructor */
	ScavTrap(std::string name);
	/* Destructor */
	~ScavTrap();
	/* Copy constructor */
	ScavTrap(const ScavTrap &other);
	/* Copy assignment operator */
	ScavTrap &operator=(const ScavTrap &other);

	/* Member functions */
	void attack(const std::string &target);
	void guardGate();
};

#endif