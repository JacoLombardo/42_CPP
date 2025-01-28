/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:38:48 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 11:25:02 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <cstdlib>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie() : name("Carlo") {}
        Zombie(std::string name) : name(name) {}
        ~Zombie();
        void setName(const std::string zombieName);
        void announce() const;
};

Zombie* zombieHorde(int N, std::string name);

#endif
