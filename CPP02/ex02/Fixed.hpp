/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:59:06 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/29 10:47:51 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int number;
        static const int fractionalBits;
    
    public:
        /* Default constructor */
        Fixed();
        /* Destructor */
        ~Fixed();
        /* Int constructor */
        Fixed(const int number);
        /* Float constructor */
        Fixed(const float number);
        /* Copy constructor */
        Fixed(const Fixed &other);
        /* Copy assignment operator */
        Fixed &operator=(const Fixed &other);

        /* getRawBits member function */
        int getRawBits(void) const;
        /* setRawBits member function */
        void setRawBits(int const newNumber);
        /* toFloat member function */
        float toFloat(void) const;
        /* toInt member function */
        int toInt(void) const;

        /* Overload the + operator */
        Fixed operator+(const Fixed &other);
        /* Overload the - operator */
        Fixed operator-(const Fixed &other);
        /* Overload the * operator */
        Fixed operator*(const Fixed &other);
        /* Overload the / operator */
        Fixed operator/(const Fixed &other);

        /* Overload the > operator */
        bool operator>(const Fixed &other);
        /* Overload the < operator */
        bool operator<(const Fixed &other);
        /* Overload the == operator */
        bool operator==(const Fixed &other);
        /* Overload the != operator */
        bool operator!=(const Fixed &other);

        /* Overload the ++(x) operator */
        Fixed operator++();
        /* Overload the (x)++ operator */
        Fixed operator++(int);
        /* Overload the --(x) operator */
        Fixed operator--();
        /* Overload the (x)-- operator */
        Fixed operator--(int);

        /* min static member function */
        static Fixed min(Fixed& f1, Fixed& f2)
        {
            float a = f1.toFloat();
            float b = f2.toFloat();
            if (a < b)
                return (f1);
            else
                return (f2);
        }
        /* const min static member function */
        static Fixed min(const Fixed& f1, const Fixed& f2)
        {
            float a = f1.toFloat();
            float b = f2.toFloat();
            if (a < b)
                return (f1);
            else
                return (f2);
        }
        /* max static member function */
        static Fixed max(Fixed& f1, Fixed& f2)
        {
            float a = f1.toFloat();
            float b = f2.toFloat();
            if (a > b)
                return (f1);
            else
                return (f2);
        }
        /* const max static member function */
        static Fixed max(const Fixed& f1, const Fixed& f2)
        {
            float a = f1.toFloat();
            float b = f2.toFloat();
            if (a > b)
                return (f1);
            else
                return (f2);
        }
};

/* Overload the insertion (<<) operator */
std::ostream& operator<<(std::ostream& os, const Fixed& object);

#endif
