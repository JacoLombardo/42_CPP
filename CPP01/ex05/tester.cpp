/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:00:17 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/18 11:14:58 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl test;

    {
        std::cout << "Testing with Harl complaining on 'Debug' level: " << std::endl;
        test.complain("debug");
        std::cout << std::endl;
    }
    {
        std::cout << "Testing with Harl complaining on 'Info' level: " << std::endl;
        test.complain("info");
        std::cout << std::endl;
    }
    {
        std::cout << "Testing with Harl complaining on 'Warning' level: " << std::endl;
        test.complain("warning");
        std::cout << std::endl;
    }
    {
        std::cout << "Testing with Harl complaining on 'Error' level: " << std::endl;
        test.complain("error");
        std::cout << std::endl;
    }
}
