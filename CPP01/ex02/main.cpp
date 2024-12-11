/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:10:46 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/11 10:38:55 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &r = str;

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the pointer: " << p << std::endl;
    std::cout << "Address of the reference: " << &r << std::endl;

    std::cout << "Value of the string: " << str << std::endl;
    std::cout << "Value of the pointer: " << *p << std::endl;
    std::cout << "Value of the reference: " << r << std::endl;

    return (0);
}
