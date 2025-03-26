/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:19:36 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 13:51:33 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "messages.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
	if (messages)
		std::cout << "[MateriaSource] Default constructor called!" << std::endl;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete templates[i];
	if (messages)
		std::cout << "[MateriaSource] Destructor called!" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
        if (other.templates[i])
		    templates[i] = (*other.templates[i]).clone();
        else
            templates[i] = NULL;
	}
	if (messages)
	    std::cout << "[MateriaSource] Copy constructor called!" << std::endl;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
            if (templates[i])
                delete templates[i];
			if (other.templates[i])
				templates[i] = (*other.templates[i]).clone();
            else
                templates[i] = NULL;
		}
	}
	if (messages)
	    std::cout << "[MateriaSource] Copy assignment operator called!" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!templates[i])
		{
			templates[i] = m;
			return ;
		}
	}
	std::cout << "[MateriaSource] Templates are full!" << std::endl;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (templates[i] && (*templates[i]).getType() == type)
        {
            AMateria *clone = (*templates[i]).clone();
            return (clone);
        }
    }
    return (0);
}
