/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/16 14:46:39 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "Test with invalid grade (form):" << std::endl << std::endl;
	try {
		Form a("errore", 167, 5);
	}
	catch (std::exception &e) {
		std::cerr << "[Form] Construction failed: " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "Test with bureaucrat with grade too low to sign the form:" << std::endl << std::endl;
	Bureaucrat pino(80);
	Form c("Semplice", 5, 1);
	pino.signForm(c);
	std::cout << std::endl << std::endl;

	std::cout << "Test with bureaucrat with valid grade to sign the form:" << std::endl << std::endl;
	Bureaucrat gino(10);
	Form b;
	gino.signForm(b);
	std::cout << std::endl << std::endl;
	return (0);
}