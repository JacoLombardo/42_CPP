/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:58:17 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/28 13:29:44 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data test = {"Random", "28-05-2025"};
	Data *ptr = &test;
	ptr->showOff();
	uintptr_t raw = Serializer::serialize(ptr);
	std::cout << "Raw uintptr_t: " << raw << std::endl;
	ptr = Serializer::deserialize(raw);
	ptr->showOff();
	
	return (0);
}
