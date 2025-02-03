/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:11:50 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 14:06:10 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
    private:
        int id;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        int phoneNumber;
        std::string darkestSecret;
    
    public:
        
        Contact() : id(0) {};
        Contact(int id) : id(id) {};

        /* Setters */
        void    setFirstName(std::string str)
        {
            firstName = str;
        };
        void    setLastName(std::string str)
        {
            lastName = str;
        };
        void    setNickname(std::string str)
        {
            nickname = str;
        };
        void    setPhoneNumber(int nb)
        {
            phoneNumber = nb;
        };
        void    setDarkestSecret(std::string str)
        {
            darkestSecret = str;
        };

        /* Getters */
        int getId() const
        {
            return (id);
        }
        std::string    getFirstName() const
        {
            return (firstName);
        };
        std::string    getLastName() const
        {
            return (lastName);
        };
        std::string    getNickname() const
        {
            return (nickname);
        };
        int    getPhoneNumber() const
        {
            return (phoneNumber);
        };
        std::string    getDarkestSecret() const
        {
            return (darkestSecret);
        };
};

#endif