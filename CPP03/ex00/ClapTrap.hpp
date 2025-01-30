/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:59:06 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 11:44:25 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>


class ClapTrap
{
  protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

  public:
	/* Default constructor */
	ClapTrap();
	/* Name constructor */
	ClapTrap(std::string name);
	/* Destructor */
	~ClapTrap();

	/* Member functions */
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void status(void);
};

#endif
