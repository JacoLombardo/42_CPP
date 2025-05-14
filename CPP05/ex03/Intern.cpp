/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:55:24 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 16:14:58 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "[Intern] Nameless intern created." << std::endl;
}

Intern::~Intern()
{
	std::cout << "[Intern] Nameless intern destroyed." << std::endl;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "[Intern] Copy Constructor called." << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	std::cout << "[Form] Copy assignment operator called." << std::endl;
	return (*this);
}

AForm *constructSCF(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *constructRRF(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

AForm *constructPPF(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string const &form, std::string const &target)
{
	std::string formTypes[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm* (*constructors[])(std::string const &) = {
		&constructSCF,
		&constructRRF,
		&constructPPF
	};
	for (int i = 0; i < 3; i++)
	{
		if (formTypes[i] == form)
			return (constructors[i](target));
	}
	throw Intern::InvalidFormException();
}