/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:57:31 by hlichten          #+#    #+#             */
/*   Updated: 2026/01/12 22:54:19 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// ---------- subject main ------------

// int main() {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
	
// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0; 
// }


#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
    std::cout << "===== MATERIA SOURCE's CREATION =====" << std::endl;
    IMateriaSource* src = new MateriaSource();


    std::cout << "Learning Ice & Cure" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "\n===== CHARACTER 'ME' 's CREATION =====" << std::endl;
    ICharacter* me = new Character("Me");

    std::cout << "Creating materias from source" << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "\n===== CHARACTER 'BOB' 's CREATION =====" << std::endl;
    ICharacter* bob = new Character("Bob");

    std::cout << "\n===== MATERIAS USED =====" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "\n===== TEST UNEQUIP =====" << std::endl;
    me->unequip(0); 
	std::cout << "slot 0 (ice) is enequiped but not deleted" << std::endl;

    std::cout << "Trying to use slot 0 again:" << std::endl;
    me->use(0, *bob);

    std::cout << "\n===== INVENTORY FULL =====" << std::endl;
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));

    std::cout << "\n===== CLEANUP =====" << std::endl;

    delete bob;
    delete me;
    delete src;

    return 0;
}
