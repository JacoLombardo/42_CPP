/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:14:16 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 15:58:03 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) 
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) 
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) 
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) 
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    functionMap["debug"] = &Harl::debug;
    functionMap["info"] = &Harl::info;
    functionMap["warning"] = &Harl::warning;
    functionMap["error"] = &Harl::error;
}

void Harl::complain(std::string level)
{
    std::map<std::string, void (Harl::*)()>::iterator it = functionMap.find(level);
    if (it != functionMap.end())
        (this->*(it->second))();
}
