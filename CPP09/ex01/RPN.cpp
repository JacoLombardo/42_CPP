/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:11:28 by jalombar          #+#    #+#             */
/*   Updated: 2025/10/06 14:18:25 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) : _stack(other._stack) {}

RPN& RPN::operator=(const RPN &other) {
	if (this != &other) {
		_stack = other._stack;
	}
	return (*this);
}

RPN::~RPN() {}

bool RPN::isOperator(const std::string &token) const {
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

bool RPN::isValidNumber(const std::string &token) const {
	if (token.empty()) return (false);
	
	size_t start = 0;
	if (token[0] == '-') {
		if (token.length() == 1) return (false);
		start = 1;
	}
	
	for (size_t i = start; i < token.length(); ++i) {
		if (!isdigit(token[i])) return (false);
	}
	return (true);
}

int RPN::performOperation(int operand2, int operand1, const std::string &op) const {
	if (op == "+") return (operand1 + operand2);
	if (op == "-") return (operand1 - operand2);
	if (op == "*") return (operand1 * operand2);
	if (op == "/") {
		if (operand2 == 0) {
			throw std::runtime_error("Division by zero");
		}
		return (operand1 / operand2);
	}
	throw std::runtime_error("Unknown operator");
}

int RPN::calculate(const std::string &expression) {
	// Clear the stack for fresh calculation
	while (!_stack.empty()) {
		_stack.pop();
	}
	
	std::istringstream iss(expression);
	std::string token;
	
	while (iss >> token) {
		if (isValidNumber(token)) {
			int num;
			std::istringstream tokenStream(token);
			tokenStream >> num;
			_stack.push(num);
		} else if (isOperator(token)) {
			if (_stack.size() < 2) {
				throw std::runtime_error("Invalid expression: not enough operands");
			}
			
			int operand2 = _stack.top();
			_stack.pop();
			int operand1 = _stack.top();
			_stack.pop();
			
			int result = performOperation(operand2, operand1, token);
			_stack.push(result);
		} else {
			throw std::runtime_error("Invalid token: " + token);
		}
	}
	
	if (_stack.size() != 1) {
		throw std::runtime_error("Invalid expression: incorrect number of operands");
	}
	
	return (_stack.top());
}
