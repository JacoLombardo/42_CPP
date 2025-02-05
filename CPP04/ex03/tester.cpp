/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:00:52 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/05 15:03:21 by jalombar         ###   ########.fr       */
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

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "Additional Tests:" << std::endl;

    std::cout << "Test using unequipped materia" << std::endl;
    me->unequip(0);
    me->use(0, *bob);

    std::cout << "Re-equip and use again" << std::endl;
    me->equip(src->createMateria("ice"));
    me->use(0, *bob);

    std::cout << " Test inventory limits" << std::endl;
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("cure"));

    std::cout << "Test deep copy constructor" << std::endl;
    Character* clone = new Character(*static_cast<Character*>(me));
    clone->use(1, *bob);

    std::cout << "Clean up" << std::endl;
    delete clone;
    delete bob;
    delete me;
    delete src;

    return 0;
}
