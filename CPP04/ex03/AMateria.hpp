/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:42:45 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/05 14:33:28 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
  protected:
    std::string type;

  public:
	AMateria(std::string const &type);
	virtual ~AMateria();
	AMateria(const AMateria &other);
	
	AMateria &operator=(const AMateria &other);
	std::string const &getType() const;

	virtual AMateria *clone() = 0;
	virtual void use(ICharacter &target) = 0;
};

#endif