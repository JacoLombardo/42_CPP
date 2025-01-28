/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:53:43 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 11:56:12 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}
