/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:20:41 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 15:51:44 by jalombar         ###   ########.fr       */
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
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        std::map<std::string, void (Harl::*)()> functionMap;

    public:
        Harl();
        void complain(std::string level);
};

#endif