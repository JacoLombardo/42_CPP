/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:59:30 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/29 14:29:55 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Default constructor */
Point::Point() : x(0), y(0)
{
	// std::cout << "Point default constructor called" << std::endl;
}

/* Destructor */
Point::~Point()
{
	// std::cout << "Point destructor called" << std::endl;
}

/* Float constructor */
Point::Point(const float x1, const float y1) : x(x1), y(y1)
{
	// std::cout << "Point float constructor called" << std::endl;
}

/* Copy constructor */
Point::Point(const Point &other) : x(other.x), y(other.y)
{
	// std::cout << "Point copy constructor called" << std::endl;
}

/* getXFloat member function */
float	Point::getXFloat(void) const
{
	return (float(x.toFloat()));
}
/* getYFloat member function */
float	Point::getYFloat(void) const
{
	return (float(y.toFloat()));
}
void	Point::print(void)
{
	std::cout << x.toFloat() << ", " << y.toFloat() << std::endl;
}

float ft_area(Point const a, Point const b, Point const c)
{
    float x1 = a.getXFloat();
    float y1 = a.getYFloat();
    float x2 = b.getXFloat();
    float y2 = b.getYFloat();
    float x3 = c.getXFloat();
    float y3 = c.getYFloat();
    return (0.5 * std::fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float area = ft_area(a, b, c);
    float area1 = ft_area(point, a, b);
    float area2 = ft_area(point, b, c);
    float area3 = ft_area(point, c, a);
    
    if (area1 == 0 || area2 == 0 || area3 == 0)
        return (false);
    else if ((area1 + area2 + area3) == area)
        return (true);
    else
        return (false);
}

/* Overload the insertion (<<) operator */
std::ostream &operator<<(std::ostream &os, const Point point)
{
	os << point.getXFloat() << ", " << point.getYFloat();
	return (os);
}