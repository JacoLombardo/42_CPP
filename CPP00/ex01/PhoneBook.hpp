/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:11:36 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 13:58:03 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <cstdlib>

class PhoneBook
{
    private:
        Contact contacts[8];
    
    public:
        PhoneBook(){};
        
        /* Getters */
        Contact &getContact(int index)
        {
            return (contacts[index]);
        }

        void addContact(Contact &x)
        {
            int index;

            index = (x.getId() - 1) % 8;
            contacts[index] = x;
        }
};

#endif