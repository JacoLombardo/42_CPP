/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:45:20 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/11 11:38:33 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(std::string name) : name(name) {}
        void setWeapon(Weapon& newWeapon)
        {
            weapon = &newWeapon;
        }
        void attack()
        {
            std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
        }
};

#endif