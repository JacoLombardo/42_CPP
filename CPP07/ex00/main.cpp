/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:33:42 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/04 10:33:42 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	{
		std::cout << "TESTING WITH INTEGERS:" << std::endl;
		int a = 2;
		int b = 3;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		swap( a, b );
		std::cout << "swapping..." << std::endl;
			std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}

	{
		std::cout << std::endl << "TESTING WITH STRINGS:" << std::endl;
		std::string c = "test1";
		std::string d = "test2";
		std::cout << "c = " << c << ", d = " << d << std::endl;
		swap( c, d );
		std::cout << "swapping..." << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
    return (0);
}
