#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>

class RPN {
private:
	std::stack<int> _stack;
	
	bool isOperator(const std::string& token) const;
	bool isValidNumber(const std::string& token) const;
	int performOperation(int operand1, int operand2, const std::string& op) const;
	
public:
	RPN();
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	~RPN();
	
	int calculate(const std::string& expression);
};

#endif