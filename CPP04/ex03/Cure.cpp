/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:36:44 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/05 14:40:00 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "messages.hpp"

Cure::Cure() : AMateria("cure")
{
    if (messages)
	    std::cout << "[Cure] Default constructor called!" << std::endl;
}
Cure::~Cure()
{
    if (messages)
	    std::cout << "[Cure] Destructor called!" << std::endl;
}
Cure::Cure(const Cure &other) : AMateria(other.getType())
{
    if (messages)
	    std::cout << "[Cure] Copy constructor called!" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    (void)other;
	if (messages)
	    std::cout << "[Cure] Copy assignment operator called!" << std::endl;
	return (*this);
}

AMateria *Cure::clone()
{
    AMateria *clone = new Cure();
    return (clone);
};
void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}