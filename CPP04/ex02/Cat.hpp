/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:04 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 10:57:54 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *brain;
    
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        /* Copy constructor */
        Cat(const Cat &other);
        /* Copy assignment operator */
        Cat& operator=(const Cat& other);
        
        void makeSound() const;
};

#endif
