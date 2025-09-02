/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 10:17:01 by jalombar          #+#    #+#             */
/*   Updated: 2025/09/02 10:01:25 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	
	BitcoinExchange btc;
	
	// Load the database file (assuming it's named "data.csv")
	if (!btc.loadDatabase("data.csv")) {
		return (1);
	}
	
	// Process the input file
	btc.processInputFile(argv[1]);
	
	return (0);
}
