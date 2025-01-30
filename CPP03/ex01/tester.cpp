/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:14:46 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 11:29:53 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	return (0);
}
