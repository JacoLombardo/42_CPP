/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:11:52 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/29 12:34:57 by jalombar         ###   ########.fr       */
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

/* Int constructor */
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    number = value * (1 << fractionalBits);
}

/* Float constructor */
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    number = int(roundf(value * (1 << fractionalBits)));
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
        number = other.number;
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

/* toFloat member function */
float Fixed::toFloat(void) const
{
    return (float(number) /  (1 << fractionalBits));
}

/* toInt member function */
int Fixed::toInt(void) const
{
    return (number / (1 << fractionalBits));
}

/* Overload the insertion (<<) operator */
std::ostream &operator<<(std::ostream &os, const Fixed &object)
{
    os << object.toFloat();
    return (os);
}
