/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:34:13 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 15:16:59 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Basic"), _signed(false), _gradeToSign(50), _gradeToExecute(30)
{
	std::cout << "[Form] " << _name << ", that needs grade " << _gradeToSign << " to be signed and grade " << _gradeToExecute << " to be executed, created." << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	else
	{
		_gradeToSign = gradeToSign;
		_gradeToExecute = gradeToExecute;
	}
	std::cout << "[Form] " << _name << ", that needs grade " << _gradeToSign << " to be signed and grade " << _gradeToExecute << " to be executed, created." << std::endl;
}

AForm::~AForm()
{
	std::cout << "[Form] " << _name << " destroyed." << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "[Form] Copy Constructor for " << _name << ", that needs grade " << _gradeToSign << " to be signed and grade " << _gradeToExecute << " to be executed, called." << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		_signed = other._signed;
		_gradeToSign = other._gradeToSign;
		_gradeToExecute = other._gradeToExecute;
	}
	std::cout << "[Form] Copy assignment operator called." << std::endl;
	return (*this);
}

std::string const &AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

unsigned int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

unsigned int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void AForm::beSigned(Bureaucrat const &guy)
{
	if (guy.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!_signed)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > _gradeToExecute)
		throw AForm::GradeTooLowException();
	else
		act();
}

std::ostream &operator<<(std::ostream &os, const AForm &object)
{
    os << object.getName() << ", form " << ((object.getSigned()) ? "signed" : "not signed") << "that needs grade " << object.getGradeToSign() << " to be signed and grade " << object.getGradeToExecute() << " to be executed.";
    return (os);
}