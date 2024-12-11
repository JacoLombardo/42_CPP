/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:38:48 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/11 10:06:35 by jalombar         ###   ########.fr       */
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
        Zombie(std::string name) : name(name) {}
        ~Zombie()
        {
            std::cout << "Zombie " << name << " destroyed." << std::endl;
        }
        void announce() const
        {
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
