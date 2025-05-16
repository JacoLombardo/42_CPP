/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:43 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/16 14:41:40 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("George"), _grade(50)
{
	std::cout << "[Bureaucrat] " << _name << ", bureaucrat grade " << _grade << ", created." << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name("Sam")
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	std::cout << "[Bureaucrat] " << _name << ", bureaucrat grade " << _grade << ", created." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat] " << _name << " destroyed." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "[Bureaucrat] Copy constructor for " << _name << ", bureaucrat grade " << _grade << ", called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		_grade = other._grade;
	std::cout << "[Bureaucrat] Copy assignment operator called." << std::endl;
	return (*this);
}

std::string const &Bureaucrat::getName() const
{
	return (_name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::increment()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrement()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &object)
{
    os << object.getName() << ", bureaucrat grade " << object.getGrade();
    return (os);
}
