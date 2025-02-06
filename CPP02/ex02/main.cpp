/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:37:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/06 13:35:58 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.cpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "max between a and b: " << Fixed::max(a, b) << std::endl;
    std::cout << "min between a and b: " << Fixed::min(a, b) << std::endl;
    return 0;
}
