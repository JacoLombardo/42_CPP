/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:20:41 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/18 11:50:47 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <cstdio>
# include <map>

class Harl
{
    private:
        void debug(void) 
        {
            std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
        }
        void info(void) 
        {
            std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
        }
        void warning(void) 
        {
            std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
        }
        void error(void) 
        {
            std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
        }
        std::map<std::string, void (Harl::*)()> functionMap;

    public:
        Harl()
        {
            functionMap["debug"] = &Harl::debug;
            functionMap["info"] = &Harl::info;
            functionMap["warning"] = &Harl::warning;
            functionMap["error"] = &Harl::error;
        }
        void filter(std::string level)
        {
            std::map<std::string, void (Harl::*)()>::iterator it = functionMap.find(level);
            if (it != functionMap.end())
            {
                while (it != functionMap.end())
                {
                    (this->*(it->second))();
                    ++it;
                }
            }
        }
};

#endif