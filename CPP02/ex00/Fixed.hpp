/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:59:06 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/17 13:21:47 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

        /* Copy constructor */
        Fixed(const Fixed &other);

        /* Copy assignment operator */
        Fixed &operator=(const Fixed &other);

        /* getRawBits member function */
        int getRawBits(void) const;

        /* setRawBits member function */
        void setRawBits(int const newNumber);
};

#endif
