/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_input.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:18 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/18 10:13:05 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

std::string	ft_check_int(std::string const &input)
{
	std::string int_max = "2147483647";
	std::string	int_min = "2147483648";
	std::string	trimmed = input;
	bool isNegative = false;

	if (trimmed[0] == '-')
	{
		isNegative = true;
		trimmed = trimmed.substr(1);
	}
	trimmed.erase(0, trimmed.find_first_not_of('0'));
	if (isNegative)
	{
		if (trimmed.length() > int_min.length())
			return ("invalid");
		else if (trimmed.length() == int_min.length())
		{
			if (trimmed > int_min)
				return ("invalid");
		}
	}
	else
	{
		if (trimmed.length() > int_max.length())
			return ("invalid");
		else if (trimmed.length() == int_max.length())
		{
			if (trimmed > int_max)
				return ("invalid");
		}
	}
	return ("int");
}

std::string	ato_1char(std::string const &input)
{
	if (isdigit(input[0]))
		return ("int");
	else
		return ("char");
}

std::string	ato(std::string const &input)
{
	std::string	type;

	type = "start";
	for (int i = 0; input[i]; i++)
	{
		if (isalpha(input[i]))
		{
			if (input[i] == 'f' && type == "double")
			{
				if (input[i + 1] == '\0')
					return ("float");
				else
					return ("invalid");
			}
			else
				return ("invalid");
		}
		if (isdigit(input[i]))
		{
			if (type == "start")
				type = "int";
			else
				return ("invalid");
		}
		if (input[i] == '.')
		{
			if (type == "int")
				type = "double";
			else
				return ("invalid");
		}
	}
	if (type == "int")
		return (ft_check_int(input));
	else
		return (type);
}

std::string	ft_scan_input(std::string const &input)
{
	if (input.length() == 1)
		return (ato_1char(input));
	else
		return (ato(input));
}