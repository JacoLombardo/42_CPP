/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:50:59 by jalombar          #+#    #+#             */
/*   Updated: 2025/01/28 12:10:32 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void    ft_read_n_write(std::ofstream& outfile, std::string line, std::string s1, std::string s2)
{
    int i;
    int len;

    i = 0;
    len = s1.length();
    while (line[i])
    {
        if (line[i] == s1[0] && !line.compare(i, len, s1, 0, len))
        {
            outfile << s2;
            i += len;
        }
        else
        {
            outfile << line[i];
            i++;
        }
    }
    outfile << std::endl;
}

const char* ft_get_outfile_name(const std::string infile)
{
    std::string outfileName = infile + ".replace";
    char* result = new char[outfileName.length() + 1];
    for (unsigned long i = 0; i < outfileName.length(); ++i) {
        result[i] = outfileName[i];
    }
    result[outfileName.length()] = '\0';
    return (result);
}

void    ft_sed(const char *filename, std::string s1, std::string s2)
{
    if (!filename || !filename[0] || !s1[0] || !s2[0])
    {
        std::cout << "Invalid arguments" << std::endl;
        return ;
    }
    std::ifstream infile(filename);
    if (!infile.is_open())
    {
        std::cout << "Invalid arguments" << std::endl;
        return ;
    }
    const char *outfileName = ft_get_outfile_name(filename);
    std::ofstream outfile(outfileName);
    std::string line;
    
    bool isEmpty = true;
    while (std::getline(infile, line))
    {
        isEmpty = false;
        ft_read_n_write(outfile, line, s1, s2);
    }
    if (isEmpty)
        std::cout << "Empty infile" << std::endl;
    infile.close();
    outfile.close();
    delete[] outfileName;
}

int main(int argc, char **argv)
{
    if (argc == 4)
        ft_sed(argv[1], argv[2], argv[3]);
    else if (argc > 4)
        std::cout << "Too many arguments" << std::endl;
    else
        std::cout << "Too few arguments" << std::endl;
    return (0);
}