/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:14:46 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 10:18:29 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	gianni;

	ScavTrap ugo("Ugo");
	gianni.attack("Ugo");
	ugo.takeDamage(20);
	ugo.status();
	ugo.attack("Gianni");
	gianni.takeDamage(20);
	gianni.status();
	gianni.beRepaired(10);
	ugo.attack("Gianni");
	gianni.takeDamage(20);
	ugo.attack("Gianni");
	gianni.takeDamage(20);
	ugo.attack("Gianni");
	gianni.takeDamage(20);
	ugo.attack("Gianni");
	gianni.takeDamage(20);
	ugo.attack("Gianni");
	gianni.takeDamage(20);
	gianni.status();
	gianni.beRepaired(10);
	ugo.guardGate();
	
	FragTrap marco("Marco");
	marco.status();
	marco.highFivesGuys();

	DiamondTrap dino("Dino");
	dino.whoAmI();
	dino.status();
	dino.attack("Qualcuno");
	dino.status();
	dino.takeDamage(100);
	dino.status();
	
	return (0);
}
