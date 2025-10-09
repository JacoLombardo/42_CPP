/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 10:16:45 by jalombar          #+#    #+#             */
/*   Updated: 2025/10/09 09:30:19 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

// Chose map for:
// 		dates sorted automatically,
// 		fast lookup for exact or closest date.

class BitcoinExchange {
private:
	std::map<std::string, float> _database;

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();
	
	bool loadDatabase(const std::string &filename);
	void processInputFile(const std::string &filename);
	void processLine(const std::string &line);

	bool isValidDate(const std::string &date);
	bool isValidValue(const std::string &value, const std::string &line);
	float stringToFloat(const std::string &str);
	std::string trim(const std::string &str);
	std::string findClosestDate(const std::string &date);
};

#endif
