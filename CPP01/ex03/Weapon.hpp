/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:45:29 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 15:03:09 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  private:
	std::string weapon;

  public:
	Weapon();
	Weapon(const std::string &firstWeapon);
	const std::string getType() const;
	void setType(const std::string &newWeapon);
};

#endif