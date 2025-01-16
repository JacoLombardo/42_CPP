/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:20:41 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/16 15:36:25 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <cstdio>
# include <map>
# include <cctype>

class Harl
{
    private:
        void debug(void) 
        {
            std::cout << "[ DEBUG ]" << std::endl;
            std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
        }
        void info(void) 
        {
            std::cout << "[ INFO ]" << std::endl;
            std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
        }
        void warning(void) 
        {
            std::cout << "[ WARNING ]" << std::endl;
            std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
        }
        void error(void) 
        {
            std::cout << "[ ERROR ]" << std::endl;
            std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
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
            char    option = std::tolower(level[0]);
            switch (option)
            {
                case 'd':
                    debug();
                    info();
                    warning();
                    error();
                    break;
                case 'i':
                    info();
                    warning();
                    error();
                    break;
                case 'w':
                    warning();
                    error();
                    break;
                case 'e':
                    error();
                    break;
            }
        }
};

#endif