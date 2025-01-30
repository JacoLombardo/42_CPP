/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:31:55 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/30 11:41:21 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.cpp"

int main(void)
{
    ClapTrap gianni;
    ClapTrap ugo("Ugo");
    gianni.attack("Ugo");
    ugo.attack("Gianni");
    ugo.takeDamage(5);
    ugo.status();
    ugo.beRepaired(5);
    ugo.status();
    return (0);
}
