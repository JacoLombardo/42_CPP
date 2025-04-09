/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:57:39 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/05 14:37:19 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "messages.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
    if (messages)
	    std::cout << "[AMateria] " << type << " was created!" << std::endl;
}
AMateria::~AMateria()
{
    if (messages)
	    std::cout << "[AMateria] " << type << " was destroyed!" << std::endl;
}
AMateria::AMateria(const AMateria &other) : type (other.getType())
{
    if (messages)
	    std::cout << "[AMateria] Copy constructor called!" << std::endl;
}
	
AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
        type = other.getType();
    if (messages)
	    std::cout << "[AMateria] Copy constructor called!" << std::endl;
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (type);
}
