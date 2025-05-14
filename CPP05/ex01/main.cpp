/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/15 15:07:32 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test(Bureaucrat *example, bool increment, bool decrement)
{
	std::cout << *example << std::endl;
	if (increment)
	{
		try {
			example->increment();
		}
		catch (std::exception &e) {
			std::cerr << "Increment not possible: " << e.what() << std::endl;
		}
		std::cout << *example << std::endl;
	}
	if (decrement)
	{
		try {
			example->decrement();
		}
		catch (std::exception &e) {
			std::cerr << "Decrement not possible: " << e.what() << std::endl;
		}
		std::cout << *example << std::endl;
	}
	delete example;
}

int	main(void)
{
	try {
		Form a("errore", 167, 5);
	}
	catch (std::exception &e) {
		std::cout << "[Form] Construction failed: " << e.what() << std::endl;
	}

	Bureaucrat gino(10);
	Bureaucrat pino(80);
	Form b;
	Form c("Semplice", 5, 1);
	gino.signForm(b);
	pino.signForm(c);

	return (0);
}