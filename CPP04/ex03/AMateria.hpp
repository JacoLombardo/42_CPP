/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:42:45 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:03:54 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
  protected:
    std::string type;

  public:
	AMateria(std::string const &type);

	std::string const &getType() const;

	virtual AMateria *clone() = 0;
	virtual void use(ICharacter &target);
};

#endif