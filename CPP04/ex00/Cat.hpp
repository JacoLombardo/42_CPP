/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:27:04 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 13:25:18 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
    private:
    
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat(const Cat &other);
	    Cat &operator=(const Cat &other);
        
        void makeSound() const;
};

#endif
