/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:06:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:35:50 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice was created!" << std::endl;
}

AMateria *Ice::clone()
{
    AMateria *clone = new Ice();
    return (clone);
};
void use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}