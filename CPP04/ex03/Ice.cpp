/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:06:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/05 14:39:53 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "messages.hpp"

Ice::Ice() : AMateria("ice")
{
    if (messages)
	    std::cout << "[Ice] Default constructor called!" << std::endl;
}
Ice::~Ice()
{
    if (messages)
	    std::cout << "[Ice] Destructor called!" << std::endl;
}
Ice::Ice(const Ice &other) : AMateria(other.getType())
{
    if (messages)
	    std::cout << "[Ice] Copy constructor called!" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    (void)other;
	if (messages)
	    std::cout << "[Ice] Copy assignment operator called!" << std::endl;
	return (*this);
}

AMateria *Ice::clone()
{
    AMateria *clone = new Ice();
    return (clone);
};
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}