/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:16:42 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/29 13:57:22 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "TEST 1" << std::endl;
		std::cout << "Testing to create a span of default size:" << std::endl;
		Span test;
	}
	
	{
		std::cout << std::endl << std::endl << "TEST 2" << std::endl;
		std::cout << std::endl << "Testing to create a span of size 5:" << std::endl;
		Span test(5);
		std::cout << std::endl << "Testing to add 6 numbers to the span of size 5:" << std::endl;
		try {
			test.addNumber(2);
			test.addNumber(5);
			test.addNumber(1);
			test.addNumber(7);
			test.addNumber(15);
			test.addNumber(9);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		test.printAll();
		std::cout << std::endl << "Testing to get Longest and Shortest span:" << std::endl;
		try {
			std::cout << "Longest Span: " << test.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << test.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << std::endl << "TEST 3" << std::endl;
		std::cout << std::endl << "Testing to create a span of size 10:" << std::endl;
		Span test(10);
		std::cout << std::endl << "Testing to fill up the span of size 10:" << std::endl;
		try {
			test.fillUp();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		test.printAll();
		std::cout << std::endl << "Testing to get Longest and Shortest span:" << std::endl;
		try {
			std::cout << "Longest Span: " << test.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << test.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << std::endl << "TEST 4" << std::endl;
		std::cout << std::endl << "Testing to create a span of size 1000:" << std::endl;
		Span test(1000);
		std::cout << std::endl << "Testing to fill up the span of size 1000:" << std::endl;
		try {
			test.fillUp();
			std::cout << "Container filled!" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Testing to get Longest and Shortest span:" << std::endl;
		try {
			std::cout << "Longest Span: " << test.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << test.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << std::endl << "TEST 5" << std::endl;
		std::cout << std::endl << "Testing to create a span of size 10000:" << std::endl;
		Span test(10000);
		std::cout << std::endl << "Testing to fill up the span of size 10000:" << std::endl;
		try {
			test.fillUp();
			std::cout << "Container filled!" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Testing to get Longest and Shortest span:" << std::endl;
		try {
			std::cout << "Longest Span: " << test.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << test.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << std::endl << "TEST 6" << std::endl;
		std::cout << std::endl << "Testing to create a span of size 50000:" << std::endl;
		Span test3(50000);
		std::cout << std::endl << "Testing to fill up the span of size 50000:" << std::endl;
		try {
			test3.fillUp();
			std::cout << "Container filled!" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl << "Testing to get Longest and Shortest span:" << std::endl;
		try {
			std::cout << "Longest Span: " << test3.longestSpan() << std::endl;
			std::cout << "Shortest Span: " << test3.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
