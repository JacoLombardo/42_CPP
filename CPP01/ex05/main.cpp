/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:19:38 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 13:27:09 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl main;
    std::string comment;
    
    if (argc == 2)
    {
        comment = argv[1];
        for(std::size_t i = 0; i < comment.length(); i++)
            comment[i] = std::tolower(static_cast<unsigned char>(comment[i]));
        main.complain(comment);
    }
    return (0);
}
