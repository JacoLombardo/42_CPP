/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:53:33 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:59:48 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
  private:

  public:
	/* Default constructor */
	FragTrap();
	/* Name constructor */
	FragTrap(std::string name);
	/* Destructor */
	~FragTrap();
	/* Copy constructor */
	FragTrap(const FragTrap &other);
	/* Copy assignment operator */
	FragTrap &operator=(const FragTrap &other);

	/* Member functions */
	void highFivesGuys(void);
};


#endif