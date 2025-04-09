/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:19:38 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 16:05:28 by jalombar         ###   ########.fr       */
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
    Harl main;
    std::string comment;
    
    if (argc == 2)
    {
        comment = argv[1];
        for(std::size_t i = 0; i < comment.length(); i++)
            comment[i] = std::tolower(static_cast<unsigned char>(comment[i]));
        if (ft_accepted(comment))
            main.complain(comment);
        else
            std::cout << "Harl does not complain about that" << std::endl;
    }
    return (0);
}
