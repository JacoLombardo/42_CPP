/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:45:29 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 12:05:48 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
    private:
        std::string weapon;

    public:
        Weapon() : weapon("Axe") {}
        Weapon(const std::string& firstWeapon) : weapon(firstWeapon) {}
        const std::string getType() const;
        void setType(const std::string& newWeapon);
};

#endif