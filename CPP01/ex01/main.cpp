/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:10:46 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 11:28:38 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    int n;
    if (argc == 3)
    {
        n = std::atoi(argv[1]);
        if (n <= 0)
        {
            std::cout << "Invalid Zombies amout" << std::endl;
            return (0);
        }
        Zombie* horde = zombieHorde(n, argv[2]);
        for (int i = 0; i < n; i++)
            horde[i].announce();
        delete[] horde;
    }
    else
        std::cout << "Add number and name of Zombies" << std::endl;
    return (0);
}
