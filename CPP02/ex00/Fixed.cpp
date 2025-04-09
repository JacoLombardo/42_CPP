/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:11:52 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 16:20:53 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

/* Default constructor */
Fixed::Fixed() : number(0)
{
    std::cout << "Default constructor called" << std::endl;
}

/* Destructor */
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/* Copy constructor */
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

/* Copy assignment operator */
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        number = other.getRawBits();
    return (*this);
}

/* getRawBits member function */
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (number);
}

/* setRawBits member function */
void Fixed::setRawBits(int const newNumber)
{
    std::cout << "setRawBits member function called" << std::endl;
    number = newNumber;
}
