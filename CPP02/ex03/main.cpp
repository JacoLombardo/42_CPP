/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:37:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/29 14:38:22 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.cpp"
#include "Point.cpp"

int main(int argc, char **argv)
{
    if (argc == 9)
    {
        float x1 = std::atof(argv[1]);
        float y1 = std::atof(argv[2]);
        float x2 = std::atof(argv[3]);
        float y2 = std::atof(argv[4]);
        float x3 = std::atof(argv[5]);
        float y3 = std::atof(argv[6]);
        float x4 = std::atof(argv[7]);
        float y4 = std::atof(argv[8]);

        Point a(x1, y1);
        Point b(x2, y2);
        Point c(x3, y3);
        Point point(x4, y4);

        if (bsp(a, b, c, point))
            std::cout << "The point is inside the triangle" << std::endl;
        else
            std::cout << "The point is outside the triangle" << std::endl;
    }
    else
        std::cout << "Not enough arguments" << std::endl;
    return 0;
}
