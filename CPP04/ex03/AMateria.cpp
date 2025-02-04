/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:57:39 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 11:03:42 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria of type " << type << " created!" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter &target)
{
    
}