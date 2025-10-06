/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 10:16:39 by jalombar          #+#    #+#             */
/*   Updated: 2025/10/06 14:15:13 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	_database = other._database;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other)
		_database = other._database;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

std::string BitcoinExchange::trim(const std::string &str) {
	size_t first = str.find_first_not_of(' ');
	if (first == std::string::npos) return ("");
	size_t last = str.find_last_not_of(' ');
	return (str.substr(first, (last - first + 1)));
}

bool BitcoinExchange::isValidDate(const std::string &date) {
	if (date.length() != 10) return (false);
	if (date[4] != '-' || date[7] != '-') return (false);
	
	// Extract year, month, day
	std::string yearStr = date.substr(0, 4);
	std::string monthStr = date.substr(5, 2);
	std::string dayStr = date.substr(8, 2);
	
	// Check if all characters are digits
	for (size_t i = 0; i < yearStr.length(); ++i)
		if (!isdigit(yearStr[i])) return (false);
	for (size_t i = 0; i < monthStr.length(); ++i)
		if (!isdigit(monthStr[i])) return (false);
	for (size_t i = 0; i < dayStr.length(); ++i)
		if (!isdigit(dayStr[i])) return (false);
	
	int year = atoi(yearStr.c_str());
	int month = atoi(monthStr.c_str());
	int day = atoi(dayStr.c_str());
	
	if (year < 1900 || year > 2100) return (false);
	if (month < 1 || month > 12) return (false);
	if (day < 1 || day > 31) return (false);
	
	// Basic month/day validation
	if (month == 2 && day > 29) return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return (false);
	
	return (true);
}
// Check if value is int between 0 and 1000
bool BitcoinExchange::isValidValue(const std::string &value) {
	if (value.empty()) return (false);
	
	char *endptr;
	float val = strtod(value.c_str(), &endptr);
	
	if (*endptr != '\0') return (false);
	if (val < 0) return (false);
	if (val > 1000) return (false);
	
	return (true);
}

float BitcoinExchange::stringToFloat(const std::string &str) {
	return (static_cast<float>(atof(str.c_str())));
}

bool BitcoinExchange::loadDatabase(const std::string &filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: could not open database file." << std::endl;
		return (false);
	}
	
	std::string line;
	bool firstLine = true;
	
	while (std::getline(file, line)) {
		// Skip header line
		if (firstLine) {
			firstLine = false;
			continue;
		}
		
		// Extract date and value
		size_t commaPos = line.find(',');
		if (commaPos == std::string::npos) continue;
		
		std::string date = trim(line.substr(0, commaPos));
		std::string valueStr = trim(line.substr(commaPos + 1));
		
		// Save in container
		if (isValidDate(date)) {
			_database[date] = stringToFloat(valueStr);
		}
	}
	
	file.close();
	return (true);
}

std::string BitcoinExchange::findClosestDate(const std::string &date) {
	std::map<std::string, float>::iterator it = _database.lower_bound(date);
	
	if (it == _database.begin()) {
		if (it->first == date) return (date);
		return (""); // No date found before or equal to the given date
	}
	
	if (it != _database.end() && it->first == date) {
		return (date); // Exact match found
	}
	
	--it; // Get the largest date that is less than the given date
	return (it->first);
}

void BitcoinExchange::processLine(const std::string &line) {
	size_t pipePos = line.find(" | ");
	if (pipePos == std::string::npos) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return ;
	}
	
	std::string date = trim(line.substr(0, pipePos));
	std::string valueStr = trim(line.substr(pipePos + 3));
	
	if (!isValidDate(date)) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return ;
	}
	
	if (!isValidValue(valueStr)) {
		float val = stringToFloat(valueStr);
		if (val < 0) {
			std::cerr << "Error: not a positive number." << std::endl;
		} else if (val > 1000) {
			std::cerr << "Error: too large a number." << std::endl;
		} else {
			std::cerr << "Error: bad input => " << line << std::endl;
		}
		return ;
	}
	
	std::string closestDate = findClosestDate(date);
	if (closestDate.empty()) {
		std::cerr << "Error: no data available for date " << date << std::endl;
		return ;
	}
	
	float value = stringToFloat(valueStr);
	float rate = _database[closestDate];
	float result = value * rate;
	
	std::cout << date << " => " << value << " = " << result << std::endl;
}

void BitcoinExchange::processInputFile(const std::string &filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}
	
	std::string line;
	bool firstLine = true;
	
	while (std::getline(file, line)) {
		// Skip header line
		if (firstLine) {
			firstLine = false;
			continue;
		}
		processLine(line);
	}
	
	file.close();
}
