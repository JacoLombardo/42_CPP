/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:58:17 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/28 14:09:40 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	srand(time(NULL));
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	return (0);
}
