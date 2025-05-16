/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:51:03 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/17 13:36:44 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include "converter.hpp"

class  ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(std::string &input);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
	
	public:
		static void convert(std::string const &input);

	class InvalidInputException : public std::exception
	{
		public:
			virtual const char* what() const throw() {
				return ("The input is invalid!");
			}
	};
};

#endif