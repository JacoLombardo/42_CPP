/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:53:33 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 12:00:51 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
  private:

  public:
	/* Default constructor */
	FragTrap();
	/* Name constructor */
	FragTrap(std::string name);
	/* Destructor */
	~FragTrap();

	/* Member functions */
	void highFivesGuys(void);
};


#endif