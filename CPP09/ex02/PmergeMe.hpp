/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:41:33 by jalombar          #+#    #+#             */
/*   Updated: 2025/10/06 11:37:36 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <ctime>
# include <climits>
# include <iomanip>
# include <cstdlib>

class PmergeMe {
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;

		// Ford–Johnson helper functions
		std::vector<size_t> genJacobsthal(size_t n);
		void fordJohnsonVec(std::vector<int> &v);
		void fordJohnsonDeq(std::deque<int> &d);

		// Small helper to insert with binary search
		template<typename T>
		void binaryInsert(T &container, int value);

	public:
		PmergeMe();
		PmergeMe(char **argv);
		~PmergeMe();

		void process();
};

#endif
