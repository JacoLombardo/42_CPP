/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:36:13 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/18 10:32:00 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

# include <iostream>
# include <exception>
# include <cctype>
# include <cstring>
# include <sstream>

std::string		ft_scan_input(std::string const &input);
void			ft_convert(std::string const &input, std::string const &type);

#endif