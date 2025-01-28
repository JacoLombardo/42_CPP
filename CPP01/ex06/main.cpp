/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:19:38 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 14:07:33 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int ft_accepted(std::string s)
{
    if (s == "debug" || s == "info" || s == "warning" || s == "error")
        return (1);
    else
        return (0);
}

int main(int argc, char **argv)
{
    Harl newHarl;
    std::string str;

    if (argc == 2)
    {
        str = argv[1];
        for(std::size_t i = 0; i < str.length(); i++)
            str[i] = std::tolower(static_cast<unsigned char>(str[i]));
        if (ft_accepted(str))
            newHarl.filter(str);
        else
            std::cout << "Invalid argument" << std::endl;
    }
    else if (argc > 2)
        std::cout << "Too many arguments" << std::endl;
    else
        std::cout << "Too few arguments" << std::endl;
    return (0);
}
