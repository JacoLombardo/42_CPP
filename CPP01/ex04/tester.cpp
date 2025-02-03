/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:29:05 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/03 15:20:25 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

void    ft_print_file(std::string infile_name, bool result)
{
    std::cout << ((result) ? "Original" : "Modified") << " testfile: " << std::endl;
    std::ifstream infile(infile_name);
    std::string line;
    while (std::getline(infile, line))
        std::cout << line << std::endl;
    std::cout << std::endl << std::endl;
    infile.close();
}

int main(void)
{
    std::cout << std::endl;
    std::ofstream empty("testfile");
    empty.close();

    {
        std::cout << "Testing with empty infile and valid s1 and s2:" << std::endl;
        std::cout << "./sed testfile bene diocane" << std::endl << std::endl;
        std::system("./sed testfile bene diocane");
        std::cout << std::endl << std::endl;
        std::remove("testfile");
    }

    std::ofstream testfile("testfile");
    testfile << "ciao come stai bene" << std::endl;
    testfile << "dai molto bene o no?" << std::endl;
    testfile << "bene dai dai" << std::endl;
    testfile.close();

    {
        std::cout << "Testing with existing infile and valid s1 and s2:" << std::endl;
        std::cout << "./sed testfile bene diocane" << std::endl << std::endl;
        std::system("./sed testfile bene diocane");
        ft_print_file("testfile", true);
        ft_print_file("testfile.replace", false);
        std::remove("testfile.replace");
    }
    
    {
        std::cout << "Testing with existing infile, invalid s1 and valid s2:" << std::endl;
        std::cout << "./sed testfile '' diocane" << std::endl << std::endl;
        std::system("./sed testfile '' diocane");
        std::cout << std::endl << std::endl;
    }

    {
        std::cout << "Testing with existing infile, valid s1 and invalid s2:" << std::endl;
        std::cout << "./sed testfile bene ''" << std::endl << std::endl;
        std::system("./sed testfile bene ''");
        std::ifstream infile("testfile.replace");
        std::string line;
        while (std::getline(infile, line))
            std::cout << line << std::endl;
        std::cout << std::endl << std::endl;
        infile.close();
        std::remove("testfile.replace");
    }
    
    {
        std::cout << "Testing with non existing infile and valid s1 and s2:" << std::endl;
        std::cout << "./sed nonexisting bene diocane" << std::endl << std::endl;
        std::system("./sed nonexisting bene diocane");
        std::cout << std::endl << std::endl;
    }

    {
        std::cout << "Testing with invalid infile and valid s1 and s2:" << std::endl;
        std::cout << "./sed '' bene diocane" << std::endl << std::endl;
        std::system("./sed '' bene diocane");
        std::cout << std::endl;
    }
    
    std::remove("testfile");
    return (0);
}