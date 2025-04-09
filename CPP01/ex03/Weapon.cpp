/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:57:33 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 15:03:15 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : weapon("Axe"){};
Weapon::Weapon(const std::string &firstWeapon) : weapon(firstWeapon){};

const std::string Weapon::getType() const
{
	return (weapon);
}

void Weapon::setType(const std::string &newWeapon)
{
	weapon = newWeapon;
}
