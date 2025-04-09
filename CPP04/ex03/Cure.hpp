/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:36:08 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/05 14:39:29 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
  protected:

  public:
	Cure();
	~Cure();
	Cure(const Cure &other);

	Cure &operator=(const Cure &other);
	AMateria *clone();
	void use(ICharacter &target);
};

#endif