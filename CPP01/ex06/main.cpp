/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:19:38 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/18 11:33:01 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl newHarl;
    std::cout << "Filter for Debug: " << std::endl;
    newHarl.filter("debug");
    std::cout << std::endl << std::endl;
    std::cout << "Filter for Info: " << std::endl;
    newHarl.filter("info");
    std::cout << std::endl << std::endl;
    std::cout << "Filter for Warning: " << std::endl;
    newHarl.filter("warning");
    std::cout << std::endl << std::endl;
    std::cout << "Filter for Error: " << std::endl;
    newHarl.filter("error");
    std::cout << std::endl << std::endl;
    return (0);
}
