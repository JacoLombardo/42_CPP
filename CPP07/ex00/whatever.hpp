/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:36:51 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/04 10:36:51 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T *a, T *b) {
    T temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

template <typename T>
T max(T a, T b) {
    return ((a > b) ? a : b);
}

template <typename T>
T min(T a, T b) {
    return ((a < b) ? a : b);
}

#endif