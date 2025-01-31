/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:09 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/31 14:04:45 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        /* Copy constructor */
        Dog(const Dog &other);
        /* Copy assignment operator */
        Dog& operator=(const Dog& other);

        void makeSound() const;
};

#endif
