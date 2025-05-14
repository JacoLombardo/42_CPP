/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:31:00 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/04 11:47:45 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T, typename F>
void iter(T *p1, int p2, F p3) {
	for (int i = 0; i < p2; i++)
		p3(p1[i]);
}

template <typename T>
void testFunction(T element) {
	std::cout << element << std::endl;
}

#endif