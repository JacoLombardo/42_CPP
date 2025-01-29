/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:58:42 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/29 14:35:13 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include <cstdlib>
# include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    
    public:
        /* Default constructor */
        Point();
        /* Destructor */
        ~Point();
        /* Float constructor */
        Point(const float x1, const float y1);
        /* Copy constructor */
        Point(const Point &other);
        /* Copy assignment operator */
        Point& operator=(const Point& other);

        /* getXFloat member function */
        float getXFloat(void) const;
        /* getYFloat member function */
        float getYFloat(void) const;
        void    print(void);
};

//bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &os, const Fixed &object);

#endif