/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:45:10 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/18 11:01:05 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;

    public:
        HumanA(std::string name, Weapon& newWeapon) : name(name), weapon(newWeapon) {}
        void setWeapon(const Weapon newWeapon) 
        {
            weapon.setType(newWeapon.getType());
        }
        void attack()
        {
            std::cout << name << " attacks with their " << weapon.getType() << std::endl;
        }
};

#endif