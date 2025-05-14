/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:46 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 13:53:03 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;
	
	public:
		Bureaucrat();
		Bureaucrat(int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);

		std::string const &getName() const;
		unsigned int getGrade() const;
		void increment();
		void decrement();
		void signForm(AForm &form) const;
		void executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("grade too high!");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("grade too low!");
				}
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &object);

#endif