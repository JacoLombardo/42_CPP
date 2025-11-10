/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:11:31 by jalombar          #+#    #+#             */
/*   Updated: 2025/10/09 09:33:59 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <exception>

// Chose stack for:
// 		LIFO (Last In, First Out) behavior,
// 		in RPN the most recently added numbers are the first ones used in an operation.

class RPN {
private:
	std::stack<int> _stack;
	
public:
	RPN();
	RPN(const RPN &other);
	RPN& operator=(const RPN &other);
	~RPN();
	
	int calculate(const std::string &expression);
	bool isOperator(const std::string &token);
	bool isValidNumber(const std::string &token);
	int performOperation(int operand1, int operand2, const std::string &op);
};

#endif