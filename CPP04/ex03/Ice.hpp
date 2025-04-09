/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:04:18 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/05 14:39:16 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
  protected:

  public:
	Ice();
	~Ice();
	Ice(const Ice &other);

	Ice &operator=(const Ice &other);
	AMateria *clone();
	void use(ICharacter &target);
};

#endif