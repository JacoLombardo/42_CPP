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

static bool ft_has_dot(const std::string &str) {
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			return (true);
	}
	return (false);
}

static bool ft_is_float(const std::string &input) {
    if (input == "-inff" || input == "+inff" || input == "nanf")
		return (true);
	if (input[input.length() - 1] != 'f')
		return (false);
	try {
        std::stof(input);
        return (true);
    } catch (...) {
        return (false);
    }
	/* if (ft_has_dot(input) && input.back() == 'f')
		return (true);
	else
		return (false); */
}

static bool ft_is_double(const std::string &input) {
	if (input == "-inf" || input == "+inf" || input == "nan")
		return (true);
	if (!ft_has_dot(input))
		return (false);
	try {
        std::stod(input);
        return (true);
    } catch (...) {
        return (false);
    }
	/* if (ft_has_dot(input) && input.back() != 'f')
		return (true);
	else
		return (false); */
}

static bool ft_is_int(const std::string& input) {
    if (input.empty())
		return (false);

    size_t i = 0;
    if (input[0] == '-' || input[0] == '+')
		i++;

    if (i == input.length())
		return (false);

    while (i < input.length())
	{
        if (!isdigit(input[i]))
			return (false);
        i++;
    }
	try {
        std::stoi(input);
        return (true);
    } catch (...) {
        return (false);
    }
    /* try {
        int val = std::stoi(input); // throws if invalid or out of range
        (void)val; // avoid unused warning
        return (true);
    } catch (...) {
        return (false);
    } */
}

void ScalarConverter::convert(const std::string &literal) {
    std::cout << std::fixed << std::setprecision(1);

    if (ft_is_char(literal)) {
        char c = literal[1];
        std::cout << "char: '" << c << '\'' << std::endl
					<< "int: " << static_cast<int>(c) << std::endl
					<< "float: " << static_cast<float>(c) << 'f' << std::endl
					<< "double: " << static_cast<double>(c) << std::endl;
        return ;
    }

    if (ft_is_int(literal)) {
        int i = std::stoi(literal);
        char c = static_cast<char>(i);
        if (i < 0 || i > 127)
			std::cout << "char: impossible" << std::endl;
        else if (!isprint(c))
			std::cout << "char: Non displayable" << std::endl;
        else
			std::cout << "char: '" << c << '\'' << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << 'f' << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
        return ;
    }

    if (ft_is_float(literal)) {
        float f = std::stof(literal);
        char c = static_cast<char>(f);
        if (std::isnan(f) || f < 0 || f > 127)
			std::cout << "char: impossible" << std::endl;
        else if (!isprint(c))
			std::cout << "char: Non displayable" << std::endl;
        else
			std::cout << "char: '" << c << '\'' << std::endl;
        if (f < INT_MIN || f > INT_MAX || std::isnan(f))
			std::cout << "int: impossible" << std::endl;
        else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << 'f' << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
        return ;
    }

    if (ft_is_double(literal)) {
        double d = std::stod(literal);
        char c = static_cast<char>(d);
        if (std::isnan(d) || d < 0 || d > 127)
			std::cout << "char: impossible" << std::endl;
        else if (!isprint(c))
			std::cout << "char: Non displayable" << std::endl;
        else
			std::cout << "char: '" << c << '\'' << std::endl;
        if (d < INT_MIN || d > INT_MAX || std::isnan(d))
			std::cout << "int: impossible" << std::endl;
        else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
		std::cout << "double: " << d << std::endl;
		return ;
	}

	std::cout << "char: impossible" << std::endl
				<< "int: impossible" << std::endl
				<< "float: impossible" << std::endl
				<< "double: impossible" << std::endl;
}
