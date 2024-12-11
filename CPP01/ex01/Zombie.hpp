/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:38:48 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/11 10:23:06 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie() : name("Carlo") {}
        Zombie(std::string name) : name(name) {}
        ~Zombie()
        {
            std::cout << "Zombie " << name << " destroyed." << std::endl;
        }
        /* void setName(const std::string& zombieName) 
        {
            name = zombieName;
        } */
       void setName(const std::string zombieName)
        {
            name = zombieName;
        }
        void announce() const
        {
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
};

Zombie* zombieHorde(int N, std::string name);

#endif
