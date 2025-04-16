/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:17:27 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 13:54:45 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("carlo")
{
	std::cout << "[RobotomyRequestForm] " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "[RobotomyRequestForm] " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, created." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[RobotomyRequestForm] " << AForm::getName() << " destroyed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45), _target(other._target)
{
	std::cout << "[RobotomyRequestForm] Copy Constructor for " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		_target = other._target;
	std::cout << "[RobotomyRequestForm] Copy assignment operator called." << std::endl;
	return (*this);
}

void RobotomyRequestForm::act() const
{
	std::cout << "VRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRT!" << std::endl;
	if (rand() % 2 == 0)
		std::cout << "[RobotomyRequestForm] " << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "[RobotomyRequestForm] Robotomy failed!" << std::endl;
}