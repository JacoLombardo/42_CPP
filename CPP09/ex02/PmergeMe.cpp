/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:05:43 by jalombar          #+#    #+#             */
/*   Updated: 2025/10/06 12:19:32 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **argv) {
	// Initialise the containers
	for (int i = 0; argv[i]; i++) {
		std::string s = argv[i];
		for (size_t j = 0; j < s.size(); j++) {
			if (!isdigit(s[j]))
				throw std::runtime_error("Error");
		}
		long n = std::atol(s.c_str());
		if (n < 0 || n > INT_MAX)
			throw std::runtime_error("Error");
		_vec.push_back(n);
		_deq.push_back(n);
	}
}

PmergeMe::~PmergeMe() {}

static void printVec(const std::vector<int> &v, const std::string &label) {
	std::cout << label;
	for (size_t i = 0; i < v.size(); i++) {
		std::cout << v[i];
		if (i + 1 < v.size())
			std::cout << " ";
	}
	std::cout << std::endl;
}

// Jacobsthal sequence generator
std::vector<size_t> PmergeMe::genJacobsthal(size_t n) {
	std::vector<size_t> seq;
	size_t j1 = 1, j2 = 1;
	while (j2 < n) {
		seq.push_back(j2);
		size_t next = j2 + 2 * j1;
		j1 = j2;
		j2 = next;
	}
	return (seq);
}

// Binary insertion helper
template<typename T>
void PmergeMe::binaryInsert(T &container, int value) {
	typename T::iterator it = container.begin();
	typename T::iterator end = container.end();
	while (it != end && *it < value)
		it++;
	container.insert(it, value);
}

// Vector Ford–Johnson
void PmergeMe::fordJohnsonVec(std::vector<int> &v) {
	size_t n = v.size();
	if (n <= 1)
		return ;

	std::vector<int> big;
	std::vector<int> small;

	// 1: make pairs and split min/max
	for (size_t i = 0; i + 1 < n; i += 2) {
		int a = v[i];
		int b = v[i + 1];
		if (a < b) {
			small.push_back(a);
			big.push_back(b);
		} else {
			small.push_back(b);
			big.push_back(a);
		}
	}
	if (n % 2)
		small.push_back(v[n - 1]);

	// 2: sort the larger ones recursively
	fordJohnsonVec(big);

	// 3: insert first small element at front
	std::vector<int> result;
	result.push_back(big[0]);
	for (size_t i = 1; i < big.size(); i++)
		result.push_back(big[i]);

	// 4: insert small elements in Jacobsthal order
	std::vector<size_t> jac = genJacobsthal(small.size());
	std::vector<size_t> inserted;

	for (size_t i = 0; i < jac.size(); i++) {
		size_t idx = jac[i];
		if (idx > small.size())
			break;
		binaryInsert(result, small[idx - 1]);
		inserted.push_back(idx - 1);
	}
	// 5: insert remaining smalls
	for (size_t i = 0; i < small.size(); i++) {
		bool done = false;
		for (size_t j = 0; j < inserted.size(); j++) {
			if (inserted[j] == i)
				done = true;
		}
		if (!done)
			binaryInsert(result, small[i]);
	}

	v = result;
}

// Deque Ford–Johnson
void PmergeMe::fordJohnsonDeq(std::deque<int> &d) {
	size_t n = d.size();
	if (n <= 1)
		return;

	std::deque<int> big;
	std::deque<int> small;

	// 1: make pairs and split min/max
	for (size_t i = 0; i + 1 < n; i += 2) {
		int a = d[i];
		int b = d[i + 1];
		if (a < b) {
			small.push_back(a);
			big.push_back(b);
		} else {
			small.push_back(b);
			big.push_back(a);
		}
	}
	if (n % 2)
		small.push_back(d[n - 1]);

	// 2: sort the larger ones recursively
	fordJohnsonDeq(big);

	// 3: insert first small element at front
	std::deque<int> result;
	for (size_t i = 0; i < big.size(); i++)
		result.push_back(big[i]);

	// 4: insert small elements in Jacobsthal order
	std::vector<size_t> jac = genJacobsthal(small.size());
	std::vector<size_t> inserted;

	for (size_t i = 0; i < jac.size(); i++) {
		size_t idx = jac[i];
		if (idx > small.size())
			break;
		binaryInsert(result, small[idx - 1]);
		inserted.push_back(idx - 1);
	}
	// 5: insert remaining smalls
	for (size_t i = 0; i < small.size(); i++) {
		bool done = false;
		for (size_t j = 0; j < inserted.size(); j++) {
			if (inserted[j] == i)
				done = true;
		}
		if (!done)
			binaryInsert(result, small[i]);
	}

	d = result;
}

void PmergeMe::process() {
	printVec(_vec, "Before: ");

	std::clock_t startV = std::clock();
	fordJohnsonVec(_vec);
	std::clock_t endV = std::clock();

	std::clock_t startD = std::clock();
	fordJohnsonDeq(_deq);
	std::clock_t endD = std::clock();

	printVec(_vec, "After: ");

	double timeVec = (double)(endV - startV) / CLOCKS_PER_SEC * 1e6;
	double timeDeq = (double)(endD - startD) / CLOCKS_PER_SEC * 1e6;

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Time to process a range of " << _vec.size()
			  << " elements with std::vector : " << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << _deq.size()
			  << " elements with std::deque : " << timeDeq << " us" << std::endl;
}
