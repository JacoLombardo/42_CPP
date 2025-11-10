/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:11:21 by jalombar          #+#    #+#             */
/*   Updated: 2025/10/06 14:38:51 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "Try: " << argv[0] << " \"<RPN expression>\"" << std::endl;
		return (1);
	}
	
	try {
		RPN calculator;
		int result = calculator.calculate(argv[1]);
		std::cout << result << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	
	return (0);
}
