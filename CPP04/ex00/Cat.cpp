/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:06 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 12:09:44 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "[Cat] " << type << " was created!" << std::endl;
}
Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "[Cat] " << type << " was created!" << std::endl;
}
Cat::~Cat()
{
    std::cout << "[Cat] " << type << " was destroyed!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] " << type << " is purring!" << std::endl;
}