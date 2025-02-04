/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:25:52 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 13:45:44 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(const Animal &other);
	    Animal &operator=(const Animal &other);

        virtual void makeSound() const;
        std::string getType() const;
};

#endif
