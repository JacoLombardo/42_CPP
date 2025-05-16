/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 14:38:01 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "Test with grade high enough to sign but not to execute:" << std::endl << std::endl;
	Bureaucrat pino(140);
	ShrubberyCreationForm form1("casina");
	pino.signForm(form1);
	pino.executeForm(form1);
	std::cout << std::endl << std::endl;

	std::cout << "Test with form not signed:" << std::endl << std::endl;
	Bureaucrat gino(10);
	RobotomyRequestForm form2("Peppe");
	gino.executeForm(form2);
	std::cout << std::endl << std::endl;

	std::cout << "Test with grade high enough to sign and execute:" << std::endl << std::endl;
	Bureaucrat gianni(1);
	ShrubberyCreationForm form3("casina");
	gianni.signForm(form3);
	gianni.executeForm(form3);
	std::cout << std::endl;
	RobotomyRequestForm form4("Peppe");
	gianni.signForm(form4);
	gianni.executeForm(form4);
	std::cout << std::endl;
	PresidentialPardonForm form5("Silvano");
	gianni.signForm(form5);
	gianni.executeForm(form5);
	std::cout << std::endl << std::endl;
	return (0);
}