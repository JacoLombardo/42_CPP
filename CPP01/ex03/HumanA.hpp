/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:45:10 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 15:02:31 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  private:
	std::string name;
	Weapon &weapon;

  public:
	HumanA(std::string name, Weapon &newWeapon);
	void setWeapon(const Weapon newWeapon);
	void attack();
};

#endif