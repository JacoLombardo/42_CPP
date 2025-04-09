/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:41:38 by jalombar          #+#    #+#             */
/*   Updated: 2025/03/26 14:13:48 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* greg = new Character("Greg");
    AMateria* materia;

    materia = src->createMateria("ice");
    greg->equip(materia);
    materia = src->createMateria("cure");
    greg->equip(materia);

    ICharacter* bob = new Character("bob");
    greg->use(0, *bob);
    greg->use(1, *bob);

    std::cout << "Additional Tests:" << std::endl;

	std::cout << "Test using unequipped materia" << std::endl;
	Character *mike = new Character("Mike");
	mike->equip(src->createMateria("ice"));
	mike->use(0, *bob);
	AMateria* temp = mike->getInventory(0);
	mike->unequip(0);
    mike->use(0, *bob);
	delete temp;

    std::cout << "Re-equip and use again" << std::endl;
    mike->equip(src->createMateria("ice"));
    mike->use(0, *bob);

    std::cout << " Test inventory limits" << std::endl;
    greg->equip(src->createMateria("ice"));
	greg->equip(src->createMateria("ice"));
	materia = src->createMateria("cure");
    greg->equip(materia);
	delete materia;

    std::cout << "Test deep copy constructor" << std::endl;
    Character* clone = new Character(*mike);
    clone->use(0, *bob);

    std::cout << "Clean up" << std::endl;
    delete clone;
    delete bob;
    delete greg;
    delete src;
	delete mike;

    return 0;
}