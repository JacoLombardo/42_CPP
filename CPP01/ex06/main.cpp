/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:19:38 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/16 15:36:31 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl newHarl;
        newHarl.filter(argv[1]);
    }
    else if (argc > 2)
        std::cout << "Too many arguments" << std::endl;
    else
        std::cout << "Too few arguments" << std::endl;
    return (0);
}
