/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:18:24 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/18 14:39:14 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

void	ft_print(std::string c, int i, float f, double d)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ft_int_to_rest(int nb)
{
	float	f;
	double	d;

	f = static_cast<float>(f);
	d = static_cast<double>(d);
	
}

void	ft_handle_int(std::string const &input)
{
	int temp;
	std::stringstream ss(input);
	ss >> temp;
	int nb = static_cast<int>(temp);
	
	
}

int	ft_str_to_int(std::string const &input)
{
	int	nb;
	
	nb = static_cast<int>(std::atoi(input.c_str()));
	return (nb);
}

void	ft_convert(std::string const &input, std::string const &type)
{
	int tmp;
	std::stringstream ss(input);
	ss >> tmp;
	if (type == "int")
	float f = static_cast<float>(tmp);
}