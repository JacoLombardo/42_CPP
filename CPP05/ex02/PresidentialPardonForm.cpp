/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:17:25 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 13:55:06 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("ugo")
{
	std::cout << "[PresidentialPardonForm] " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "[PresidentialPardonForm] " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, created." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[PresidentialPardonForm] " << AForm::getName() << " destroyed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 25, 5), _target(other._target)
{
	std::cout << "[PresidentialPardonForm] Copy Constructor for " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		_target = other._target;
	std::cout << "[PresidentialPardonForm] Copy assignment operator called." << std::endl;
	return (*this);
}

void PresidentialPardonForm::act() const
{
	std::cout << "[PresidentialPardonForm] " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
