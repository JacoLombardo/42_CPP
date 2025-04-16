/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:34:10 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 16:12:41 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		unsigned int _gradeToSign;
		unsigned int _gradeToExecute;
	
	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);

		std::string const &getName() const;
		bool getSigned() const;
		unsigned int getGradeToSign() const;
		unsigned int getGradeToExecute() const;
		void beSigned(Bureaucrat const &guy);
		void execute(Bureaucrat const &executor) const;
		virtual void act() const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("the grade is too high!");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("the grade is too low!");
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("the form is not signed yet!");
				}
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &object);

#endif