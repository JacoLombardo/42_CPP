/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:26:53 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 13:27:59 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
    
    public:
        WrongCat();
        WrongCat(std::string type);
        ~WrongCat();
        WrongCat(const WrongCat &other);
	    WrongCat &operator=(const WrongCat &other);
    
        void makeSound() const;
};

#endif