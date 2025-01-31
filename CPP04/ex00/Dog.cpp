/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:11 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 12:01:44 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "[Dog] " << type << " was created!" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "[Dog] " << type << " was created!" << std::endl;
}
Dog::~Dog()
{
    std::cout << "[Dog] " << type << " was destroyed!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[Dog] " << type << " is yelping!" << std::endl;
}
