/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:09:24 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 12:24:22 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "No idea";
    std::cout << "Brain created!" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destroyed!" << std::endl;
}
Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
    	ideas[i] = other.ideas[i];
	std::cout << "[Brain] Copy constructor for type was called!" << std::endl;
}
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        	ideas[i] = other.ideas[i];
    }
	std::cout << "[Brain] Copy assignment operator for type was created!" << std::endl;
	return (*this);
}

void Brain::addIdea(std::string new_idea)
{
    int i = 0;
    while (ideas[i] == "No idea")
        i++;
    if (i < 100)
        ideas[i] = new_idea;
    else
        std::cout << "Too many ideas already!" << std::endl;
}
