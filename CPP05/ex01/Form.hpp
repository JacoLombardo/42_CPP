/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:34:10 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/15 15:02:35 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const unsigned int _gradeToSign;
		const unsigned int _gradeToExecute;
	
	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form();
		Form(const Form &other);
		Form &operator=(const Form &other);

		std::string const &getName() const;
		bool getSigned() const;
		unsigned int getGradeToSign() const;
		unsigned int getGradeToExecute() const;
		void beSigned(Bureaucrat const &guy);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("grade is too high!");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("grade is too low!");
				}
		};
};

std::ostream &operator<<(std::ostream &os, const Form &object);

#endif