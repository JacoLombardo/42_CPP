/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:34:13 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/15 14:49:24 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Basic_form"), _signed(false), _gradeToSign(50), _gradeToExecute(30)
{
	std::cout << "[Form] " << _name << ", that needs grade " << _gradeToSign << " to be signed and grade " << _gradeToExecute << " to be executed, created." << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name + "_form"), _signed(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else
	{
		_gradeToSign = gradeToSign;
		_gradeToExecute = gradeToExecute;
	}
	std::cout << "[Form] " << _name << ", that needs grade " << _gradeToSign << " to be signed and grade " << _gradeToExecute << " to be executed, created." << std::endl;
}

Form::~Form()
{
	std::cout << "[Form] " << _name << " destroyed." << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "[Form] Copy Constructor for " << _name << ", that needs grade " << _gradeToSign << " to be signed and grade " << _gradeToExecute << " to be executed, called." << std::endl;
}

Form &Form::operator=(const Form &other)
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

std::string const &Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

unsigned int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

unsigned int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void Form::beSigned(Bureaucrat const &guy)
{
	if (guy.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

std::ostream &operator<<(std::ostream &os, const Form &object)
{
    os << object.getName() << ", form " << ((object.getSigned()) ? "signed" : "not signed") << "that needs grade " << object.getGradeToSign() << " to be signed and grade " << object.getGradeToExecute() << " to be executed.";
    return (os);
}