/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:26:56 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 12:17:42 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "[WrongCat] " << type << " was created!" << std::endl;
}
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "[WrongCat] " << type << " was created!" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] " << type << " was destroyed!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[WrongCat] " << type << " is barking!" << std::endl;
}
