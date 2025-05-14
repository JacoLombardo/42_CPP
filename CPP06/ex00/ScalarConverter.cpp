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

void ScalarConverter::convert(std::string const &input)
{
	std::string	type;
	try {
		type = ft_scan_input(input);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	ft_convert(input, type);
}
