/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 10:16:45 by jalombar          #+#    #+#             */
/*   Updated: 2025/08/29 10:17:08 by jalombar         ###   ########.fr       */
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

class BitcoinExchange {
private:
	std::map<std::string, float> _database;
	
	bool isValidDate(const std::string& date);
	bool isValidValue(const std::string& value);
	float stringToFloat(const std::string& str);
	std::string trim(const std::string& str);
	std::string findClosestDate(const std::string& date);

public:
	BitcoinExchange();
	~BitcoinExchange();
	
	bool loadDatabase(const std::string& filename);
	void processInputFile(const std::string& filename);
	void processLine(const std::string& line);
};

#endif
