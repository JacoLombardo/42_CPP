/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:17:32 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 14:40:09 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("home")
{
	std::cout << "[ShrubberyCreationForm] " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "[ShrubberyCreationForm] " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, created." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[ShrubberyCreationForm] " << AForm::getName() << " destroyed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137), _target(other._target)
{
	std::cout << "[ShrubberyCreationForm] Copy Constructor for " << AForm::getName() << ", that needs grade " << AForm::getGradeToSign() << " to be signed and grade " << AForm::getGradeToExecute() << " to be executed, called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		_target = other._target;
	std::cout << "[ShrubberyCreationForm] Copy assignment operator called." << std::endl;
	return (*this);
}

void ShrubberyCreationForm::act() const
{
	std::ofstream outfile((_target + "_shrubbery").c_str());
	outfile << "	 	 /\\" << std::endl << "		/**\\" << std::endl << "	   /****\\" << std::endl << "	  /******\\" << std::endl << "	 /********\\" << std::endl << "	/**********\\" << std::endl << "   /************\\" << std::endl << "  /**************\\" << std::endl << "		|||" << std::endl << "		|||" << std::endl;
	outfile.close();
}
