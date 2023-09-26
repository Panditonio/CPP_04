/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:07:06 by antoineherb       #+#    #+#             */
/*   Updated: 2023/08/09 16:04:56 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main(void) {

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
	std::cout << std::endl;

	delete bob;
	delete me;

	std::cout << "/*----------Further testing----------*/" << std::endl;
	std::cout << std::endl;
	
	Character indie("Indie");
	Character harry("Harry");

	indie.equip(src->createMateria("ice"));
	indie.equip(src->createMateria("bamboo"));
	indie.equip(src->createMateria("cure"));

	indie.use(0, harry);
	indie.use(1, harry);
	std::cout << "cure is stored in slot 1 because bamboo wasn't found\n" << std::endl;
	indie.use(2, harry);

	AMateria const *tmp2 = indie.getItem(0);  //save address before unequipping to avoid leaks
	indie.unequip(0);

	indie.unequip(3); //does nothing because slot 3 is empty

	for (int i = 0; i < 3; i++)
		indie.equip(src->createMateria("ice")); // adding 3 ice materias to empty slots
	for (int i = 0; i < 4; i++)
		indie.use(i, harry);						//use all 4 materias

	AMateria *tmp3 = src->createMateria("cure");
	indie.equip(tmp3);							//does nothing because inventory is full

	indie = harry;

	std::cout << "Indie's name is now " << indie.getName() << std::endl;
	indie.equip(tmp3);						// this time inventory is empty since cloud was re-assigned to tifa
	indie.use(0, harry);
	indie.unequip(0);					

	delete tmp3;
	delete tmp2;
	delete src;
	return 0;
}