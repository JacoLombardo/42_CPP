/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:48:34 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 16:14:20 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>

class AForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);

		AForm *makeForm(std::string const &form, std::string const &target);
		
		class InvalidFormException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("The form doesn't exist!");
				}
		};
};

#endif