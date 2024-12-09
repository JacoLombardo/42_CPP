/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:38:48 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/05 16:29:46 by jalombar         ###   ########.fr       */
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
        void announce()
        {
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
};

#endif
