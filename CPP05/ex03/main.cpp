/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 16:11:35 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "Test with invalid form:" << std::endl << std::endl;
	Intern pino;
	AForm *form = NULL;
	try {
		form = pino.makeForm("blabla request", "Pedro");
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	if (form)
		delete form;
	std::cout << std::endl << std::endl;

	std::cout << "Test with valid form:" << std::endl << std::endl;
	Intern gino;
	AForm *form1 = NULL;
	try {
		form1 = gino.makeForm("robotomy request", "Bender");
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	if (form1)
		delete form1;
	std::cout << std::endl << std::endl;
	return (0);
}