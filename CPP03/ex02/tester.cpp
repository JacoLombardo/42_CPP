/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:14:46 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 16:35:22 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap ugo("Ugo");
	FragTrap marco("Marco");

	marco.attack("Ugo");
	ugo.takeDamage(30);
	marco.attack("Gianni");
	ugo.takeDamage(30);
	marco.attack("Gianni");
	ugo.takeDamage(30);
	marco.attack("Gianni");
	ugo.takeDamage(30);
	ugo.beRepaired(10);
	marco.status();
	marco.highFivesGuys();
	return (0);
}
