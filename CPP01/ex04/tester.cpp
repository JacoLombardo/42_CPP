/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:29:05 by jalombar          #+#    #+#             */
/*   Updated: 2024/12/11 16:07:45 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int main(void)
{
    std::cout << std::endl;
    std::ofstream testfile("testfile");
    testfile << "ciao come stai bene" << std::endl;
    testfile << "dai molto bene o no?" << std::endl;
    testfile << "bene dai dai" << std::endl;

    {
        std::cout << "Testing with existing infile and valid s1 and s2:" << std::endl;
        std::cout << "./Sed testfile bene diocane" << std::endl << std::endl;
        std::system("./Sed testfile bene diocane");
        std::ifstream infile("testfileBis");
        std::string line;
        while (std::getline(infile, line))
            std::cout << line << std::endl;
        std::cout << std::endl << std::endl;
        std::remove("testfileBis");
    }
    
    {
        std::cout << "Testing with existing infile, invalid s1 and valid s2:" << std::endl;
        std::cout << "./Sed testfile '' diocane" << std::endl << std::endl;
        std::system("./Sed testfile '' diocane");
        std::cout << std::endl << std::endl;
    }
    

    {
        std::cout << "Testing with existing infile, valid s1 and invalid s2:" << std::endl;
        std::cout << "./Sed testfile bene ''" << std::endl << std::endl;
        std::system("./Sed testfile bene ''");
        std::ifstream infile("testfileBis");
        std::string line;
        while (std::getline(infile, line))
            std::cout << line << std::endl;
        std::cout << std::endl << std::endl;
        std::remove("testfileBis");
    }
    

    {
        std::cout << "Testing with non existing infile and valid s1 and s2:" << std::endl;
        std::cout << "./Sed nonexisting bene diocane" << std::endl << std::endl;
        std::system("./Sed nonexisting bene diocane");
        std::cout << std::endl << std::endl;
    }
    

    {
        std::cout << "Testing with invalid infile and valid s1 and s2:" << std::endl;
        std::cout << "./Sed '' bene diocane" << std::endl << std::endl;
        std::system("./Sed '' bene diocane");
        std::cout << std::endl;
    }
    
    std::remove("testfile");
    return (0);
}