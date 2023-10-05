/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:40:39 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 16:18:41 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"
#include "Character.h"
#include "ICharacter.h"



void tests(void)
{
	//Materia constructors
	AMateria *m1 = new Ice();
	AMateria *m2 = new Cure(Cure());
	AMateria *m3 = new Cure();
	AMateria *m4 = m1->clone();
	
	std::cout << std::endl;
	
	//Character constructors
	Character ps("ali"); 
	Character *ph = new Character("ahmed");
	ph->equip(m4);
	
	ICharacter *p1 = new Character(ps);
	ICharacter *p2 = new Character(*(const Character*)(ph));
	ICharacter *p3;
	delete ph;

	std::cout << std::endl;
	
	//Materia used to heal Characters
	p3 = p1;
	m1->use(*p3);
	m2->use(*p3);
	
	p3 = p2;
	m1->use(*p3);
	m3->use(*p3);

	std::cout << std::endl;
	
	//use MateriaSource to create Materia
	IMateriaSource *src = new MateriaSource;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl;
	m4 = src->createMateria("ice");
	m4->use(*p1);
	delete m4;

	std::cout << std::endl;
	m4 = src->createMateria("cure");
	m4->use(*p1);
	delete m4;

	std::cout << std::endl;
	// m4 = src->createMateria("hammer");

	std::cout << std::endl;
	
	//equip unequip Characters with materia
	p1->equip(m1);
	p1->equip(m3);
	p1->equip(nullptr);
	
	p2->use(0, *p1);
	p1->use(1, *p2);
	p1->use(2, *p2);
	p1->use(-1, *p2);
	
	p1->unequip(0);
	p1->unequip(1);
	p1->unequip(-1);
	p1->unequip(10);

	std::cout << std::endl;
	
	//free data
	delete m1;
	delete m2;
	delete m3;
	delete p1;
	delete p2;
	delete src;
}

int main(void)
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);

	// delete bob;
	// delete me;
	// delete src;

	tests();
	// system("leaks materia");

	return (0);
}

