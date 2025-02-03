/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:10:32 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 14:22:41 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Carlo")
{
    std::cout << "Zombie " << name << " created." << std::endl;
};
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " created." << std::endl;
};
Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " destroyed." << std::endl;
}

void Zombie::setName(const std::string zombieName)
{
    name = zombieName;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
