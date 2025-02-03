/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:22:39 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 14:08:11 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void ft_add(PhoneBook &phonebook, int &id)
{
    char buffer[500];
    Contact newContact(id);

    std::cout << std::endl;
    std::cout << "First Name: ";
    std::cin >> buffer;
    newContact.setFirstName(buffer);
    std::cout << "Last Name: ";
    std::cin >> buffer;
    newContact.setLastName(buffer);
    std::cout << "Nickname: ";
    std::cin >> buffer;
    newContact.setNickname(buffer);
    while (1)
    {
        std::cout << "Phone Number: ";
        std::cin >> buffer;
        if (std::atoi(buffer))
            break;
        else
            std::cout << "Invalid phone number" << std::endl << std::endl;
    }
    newContact.setPhoneNumber(std::atoi(buffer));
    std::cout << "Darkest Secret: ";
    std::cin >> buffer;
    newContact.setDarkestSecret(buffer);
    id++;
    phonebook.addContact(newContact);
    std::cout << std::endl;
}

void ft_first_10(std::string str)
{
    int i;
    int len;

    i = 0;
    len = str.length();
    if (len < 10)
        std::cout << std::setw(10 - len + 1);
    while (str[i] && i < 10)
    {
        if (i == 9 && len > 10)
            std::cout << '.';
        else
            std::cout << str[i];
        i++;
    }
}

void ft_print_list()
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickame" << std::endl << std::endl;
}

void    ft_contact_preview(Contact &x, int index)
{
    std::cout << std::setw(10) << index << "|";
    ft_first_10(x.getFirstName());
    std::cout << "|";
    ft_first_10(x.getLastName());
    std::cout << "|";
    ft_first_10(x.getNickname());
    std::cout << std::endl;
}

void ft_print_contact(Contact &x)
{
    std::cout << std::endl << "First Name: " << x.getFirstName() << std::endl;
    std::cout << "Last Name: " << x.getLastName() << std::endl;
    std::cout << "Nickname: " << x.getNickname() << std::endl;
    std::cout << "Phone Number: " << x.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << x.getDarkestSecret() << std::endl << std::endl;
}

void ft_search(PhoneBook &phonebook)
{
    int i;
    int index;

    i = 0;
    std::cout << std::endl;
    if (!phonebook.getContact(0).getFirstName()[0])
        return ;
    ft_print_list();
    while (i < 8)
    {
        if (phonebook.getContact(i).getId() != 0)
            ft_contact_preview(phonebook.getContact(i), i);
        i++;
    }
    std::cout << std::endl;
    while (1)
    {
        std::cout << "Enter the index of the contact you want to select: ";
        if (!(std::cin >> index))
            std::cin.clear();
        else if ((index >= 0 && index <= 7) && phonebook.getContact(index).getId() != 0)
        {
            ft_print_contact(phonebook.getContact(index));
            break ;
        }
        else
            std::cout << "Invalid index entered." << std::endl << std::endl;
    }
}

int main (int argc, char **argv)
{
    int  id;
    char buffer[500];
    PhoneBook phonebook;

    id = 1;
    (void)argv;
    if (argc == 1)
    {
        while (1)
        {
            std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
            std::cin >> buffer;
            std::string buff = buffer;
            if (!buff.compare("ADD"))
                ft_add(phonebook, id);
            else if (!buff.compare("SEARCH"))
                ft_search(phonebook);
            else if (!buff.compare("EXIT"))
                break ;
            else
                std::cout << "Invalid command" << std::endl << std::endl;
        }
    }
    return (0);
}