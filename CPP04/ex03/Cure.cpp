/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:36:44 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:37:58 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure was created!" << std::endl;
}

AMateria *Cure::clone()
{
    AMateria *clone = new Cure();
    return (clone);
};
void use(ICharacter &target)
{
    std::cout << "* heals " << target.name << "’s wounds *" << std::endl;
}