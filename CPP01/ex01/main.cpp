/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:10:46 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/11 10:18:59 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N;

    N = 5;
    Zombie* horde = zombieHorde(N, "Gianni");
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}
