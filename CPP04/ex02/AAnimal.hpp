/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:25:52 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 10:56:19 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif
