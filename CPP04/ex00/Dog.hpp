/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:09 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 13:26:12 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    private:
    
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog(const Dog &other);
	    Dog &operator=(const Dog &other);

        void makeSound() const;
};

#endif
