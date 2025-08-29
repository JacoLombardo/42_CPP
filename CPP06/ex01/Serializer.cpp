/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:58:05 by jalombar          #+#    #+#             */
/*   Updated: 2025/05/28 13:30:01 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "[Serializer] Serializer created." << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "[Serializer] Serializer destroyed." << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
	(void)other;
	std::cout << "[Serializer] Copy Constructor called." << std::endl;
}

Serializer &Serializer::operator=(const Serializer &other)
{
	(void)other;
	std::cout << "[Serializer] Copy assignment operator called." << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	std::cout << "[Serializer] Serializing..." << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	std::cout << "[Serializer] Deserializing..." << std::endl;
	return (reinterpret_cast<Data *>(raw));
}
