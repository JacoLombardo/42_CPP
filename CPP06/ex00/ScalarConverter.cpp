/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:51:06 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/17 13:35:40 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "[ScalarConverter] Converter created." << std::endl;
}

ScalarConverter::ScalarConverter(std::string &input)
{
	(void)input;
	std::cout << "[ScalarConverter] Converter created." << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "[ScalarConverter] Converter destroyed." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
	std::cout << "[ScalarConverter] Copy Constructor called." << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	std::cout << "[ScalarConverter] Copy assignment operator called." << std::endl;
	return (*this);
}


static bool ft_is_char(const std::string &input) {
	if (input.length() == 3 && input[0] == '\'' && input[input.length() - 1] == '\'')
    	return (true);
	else
		return (false);
}

static bool ft_is_float(const std::string &input) {
    if (input == "-inff" || input == "+inff" || input == "nanf")
        return (true);    
    std::string num_part = input.substr(0, input.length() - 1);
    char* endptr;
    std::strtod(num_part.c_str(), &endptr);
	if (*endptr == 'f' && *endptr++ == '\0')
		return (true);
	else
		return (false);
}

static bool ft_is_double(const std::string &input) {
	if (input == "-inf" || input == "+inf" || input == "nan")
        return (true);
	char* endptr;
    std::strtod(input.c_str(), &endptr);
	if (*endptr == '\0')
		return (true);
	else
		return (false);
}

static bool ft_is_int(const std::string& input) {
    char* endptr;
    long val = std::strtol(input.c_str(), &endptr, 10);
	if (*endptr == '\0' && val >= INT_MIN && val <= INT_MAX)
		return (true);
	else
		return (false);
}

void ScalarConverter::convert(const std::string &input) {
    std::cout << std::fixed << std::setprecision(1);

    if (ft_is_char(input)) {
        char c = input[1];
        std::cout << "char: '" << c << '\'' << std::endl
                  << "int: " << static_cast<int>(c) << std::endl
                  << "float: " << static_cast<float>(c) << 'f' << std::endl
                  << "double: " << static_cast<double>(c) << std::endl;
        return ;
    }

    if (ft_is_int(input)) {
        long temp = std::strtol(input.c_str(), NULL, 10);
        int i = static_cast<int>(temp);
        if (i < 0 || i > 127)
            std::cout << "char: impossible" << std::endl;
        else if (i < 32 || i == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(i) << '\'' << std::endl;
        std::cout << "int: " << i << std::endl
                  << "float: " << static_cast<float>(i) << 'f' << std::endl
                  << "double: " << static_cast<double>(i) << std::endl;
        return ;
    }

    if (ft_is_float(input)) {
        double temp = std::strtod(input.c_str(), NULL);
        float f = static_cast<float>(temp);
        if (std::isnan(f) || static_cast<int>(f) < 0 || static_cast<int>(f) > 127)
            std::cout << "char: impossible" << std::endl;
        else if (static_cast<int>(f) < 32 || static_cast<int>(f) == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(f) << '\'' << std::endl;
        if (static_cast<int>(f) < INT_MIN || static_cast<int>(f) > INT_MAX || std::isnan(f))
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << f << 'f' << std::endl
                  << "double: " << static_cast<double>(f) << std::endl;
        return ;
    }

    if (ft_is_double(input)) {
        double d = std::strtod(input.c_str(), NULL);
        if (std::isnan(d) || static_cast<int>(d) < 0 || static_cast<int>(d) > 127)
            std::cout << "char: impossible" << std::endl;
		else if (static_cast<int>(d) < 32 || static_cast<int>(d) == 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(d) << '\'' << std::endl;
        if (static_cast<int>(d) < INT_MIN || static_cast<int>(d) > INT_MAX || std::isnan(d))
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl
                  << "double: " << d << std::endl;
        return ;
    }

    std::cout << "char: impossible" << std::endl
              << "int: impossible" << std::endl
              << "float: impossible" << std::endl
              << "double: impossible" << std::endl;
}
