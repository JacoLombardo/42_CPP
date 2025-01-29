/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:31:55 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/29 14:56:12 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.cpp"
#include "Point.cpp"

void    ft_print_points(Point a, Point b, Point c, Point point)
{
    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;
    std::cout << "C: " << c << std::endl;
    std::cout << "POINT: " << point << std::endl;
}

int main(void)
{
    /* Inside */
    Point a1(1, 1);
    Point b1(6, 1);
    Point c1(3, 5);
    Point point1(3, 2);
    ft_print_points(a1, b1, c1, point1);
    if (bsp(a1, b1, c1, point1))
        std::cout << "The point is inside the triangle" << std::endl << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl << std::endl;
    
    /* Outside */
    Point a2(-3, -2);
    Point b2(2, 4);
    Point c2(5, -1);
    Point point2(4, 4);
    ft_print_points(a2, b2, c2, point2);
    if (bsp(a2, b2, c2, point2))
        std::cout << "The point is inside the triangle" << std::endl << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl << std::endl;
    
    /* Edge */
    Point a3(0, 0);
    Point b3(6, 0);
    Point c3(3, 6);
    Point point3(4.5, 3);
    ft_print_points(a3, b3, c3, point3);
    if (bsp(a3, b3, c3, point3))
        std::cout << "The point is inside the triangle" << std::endl << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl << std::endl;
    
    /* Outside */
    Point a4(0, 0);
    Point b4(5, 0);
    Point c4(0, 5);
    Point point4(6, 6);
    ft_print_points(a4, b4, c4, point4);
    if (bsp(a4, b4, c4, point4))
        std::cout << "The point is inside the triangle" << std::endl << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl << std::endl;

    /* Inside */
    Point point5(2, 2);
    ft_print_points(a4, b4, c4, point5);
    if (bsp(a4, b4, c4, point5))
        std::cout << "The point is inside the triangle" << std::endl << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl << std::endl;
    
    /* On edge */
    Point point6(1, 4);
    ft_print_points(a4, b4, c4, point6);
    if (bsp(a4, b4, c4, point6))
        std::cout << "The point is inside the triangle" << std::endl << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl << std::endl;
    
    /* On the edge */
    Point point7(2, 3);
    ft_print_points(a4, b4, c4, point7);
    if (bsp(a4, b4, c4, point7))
        std::cout << "The point is inside the triangle" << std::endl << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl << std::endl;
    
    return 0;
}
