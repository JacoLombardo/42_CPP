/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:55:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 13:53:24 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter
{
  private:
	std::string name;
	AMateria *inventory[4];

  public:
	Character();
	Character(std::string const &name);
	~Character();
	Character(const Character &other);
	Character &operator=(const Character &other);

	AMateria *getInventory(int i);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif