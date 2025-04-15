/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:32:40 by jalombar          #+#    #+#             */
/*   Updated: 2025/04/15 12:30:10 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	std::cout << "Test with default constractor:" << std::endl << std::endl;
	Bureaucrat *primo = NULL;
	try {
		primo = new Bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << "Construction failed: " << e.what() << std::endl;
	}
	if (primo)
		test(primo, true, true);
	std::cout << std::endl << std::endl;

	

	std::cout << "Test with invalid grade:" << std::endl << std::endl;
	Bureaucrat *secondo = NULL;
	try {
		secondo = new Bureaucrat(190);
	}
	catch (std::exception &e) {
		std::cout << "Construction failed: " << e.what() << std::endl;
	}
	if (secondo)
		test(secondo, true, true);
	std::cout << std::endl << std::endl;



	std::cout << "Test with valid grade and invalid increment:" << std::endl << std::endl;
	Bureaucrat *terzo = NULL;
	try {
		terzo = new Bureaucrat(1);
	}
	catch (std::exception &e) {
		std::cout << "Construction failed: " << e.what() << std::endl;
	}
	if (terzo)
		test(terzo, true, false);
	std::cout << std::endl << std::endl;



	std::cout << "Test with valid grade and invalid decrement:" << std::endl << std::endl;
	Bureaucrat *quarto = NULL;
	try {
		quarto = new Bureaucrat(150);
	}
	catch (std::exception &e) {
		std::cout << "Construction failed: " << e.what() << std::endl;
	}
	if (quarto)
		test(quarto, false, true);
	std::cout << std::endl << std::endl;



	std::cout << "Test with valid grade, valid increment and valid decrement:" << std::endl << std::endl;
	Bureaucrat *quinto = NULL;
	try {
		quinto = new Bureaucrat(100);
	}
	catch (std::exception &e) {
		std::cout << "Construction failed: " << e.what() << std::endl;
	}
	if (quinto)
		test(quinto, true, true);
	return (0);
}