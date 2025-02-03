/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:09:24 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 13:28:57 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created!" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destroyed!" << std::endl;
}

void Brain::addIdea(std::string new_idea)
{
    int i = 0;
    while (!ideas[i].empty())
        i++;
    if (i < 100)
        ideas[i] = new_idea;
    else
        std::cout << "Too many ideas already!" << std::endl;
}
