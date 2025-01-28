/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:10:46 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 11:32:17 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Address of the string: " << &string << std::endl;
    std::cout << "Address of the pointer: " << stringPTR << std::endl;
    std::cout << "Address of the reference: " << &stringREF << std::endl;

    std::cout << "Value of the string: " << string << std::endl;
    std::cout << "Value of the pointer: " << *stringPTR << std::endl;
    std::cout << "Value of the reference: " << stringREF << std::endl;

    return (0);
}
