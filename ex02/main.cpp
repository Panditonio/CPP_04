/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:36:25 by aherbet           #+#    #+#             */
/*   Updated: 2023/08/09 16:02:11 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>

#define NB 100

int main() {
    std::cout << "//----------AAnimal crossing test---------//" << std::endl;
    std::cout << std::endl;

    const AAnimal*     pack[NB];
    
    // try {
        for (int i = 0 ; i < NB ; i++) {
            if (i < NB / 2)
                pack[i] = new Dog();
            else
                pack[i] = new Cat();
            std::cout << pack[i]->getType() << " joined the Pack !" << std::endl;
        }
    // }
    // catch ( std::bad_alloc const &e) {
    //     std::cout << "[main()] failed to allocate memory: " << e.what() << std::endl;
    // }
    std::cout << std::endl;
    std::cout << "New pack of " << NB / 2 << " " << pack[0]->getType() << " and ";
    std::cout << NB / 2 << " " << pack[50]->getType() << " created using keyword \"new\"" << std::endl;
    std::cout << std::endl;

    std::cout << "//----------Destruction Test---------//" << std::endl;
    std::cout << std::endl;

    std::cout << "There is a riot between " << pack[0]->getType() << " and ";
    std::cout << pack[50]->getType() << "\n[ANIMAL CONTROL] intervenes…" << std::endl;
    for (int i = 0 ; i < NB ; i++) {
        std::cout << pack[i]->getType() << " kicked out !" << std::endl;
        delete pack[i];
    }
    std::cout<< std::endl;
    std::cout << "[ANIMAL CONTROL] thanks you for your cooperation !" << std::endl;
    std::cout << std::endl;

    std::cout << "//----------Deeeeep Copy Test---------//" << std::endl;
    std::cout << std::endl;

    std::cout << "// Checking Deepcopy with copy constructor :" << std::endl;

    Dog*    doggy = new Dog();
    Brain*  brainy = doggy->getBrain();

    std::cout << std::endl;
    brainy->setIdeas("I am braindead", 0);
    brainy->setIdeas("I am hungry", 1);
    brainy->setIdeas("I want to play", 2);
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << doggy->getType() << " thinks \"" << doggy->getBrain()->getIdeas(0) << "\"" << std::endl;
    std::cout << doggy->getType() << " thinks \"" << doggy->getBrain()->getIdeas(1) << "\"" << std::endl;
    std::cout << doggy->getType() << " thinks \"" << doggy->getBrain()->getIdeas(2) << "\"" << std::endl;
    std::cout << std::endl;

    Dog*    dodgy = new Dog(*doggy);

    std::cout << std::endl;
    std::cout << dodgy->getType() << " copy thinks \"" << dodgy->getBrain()->getIdeas(0) << "\"" << std::endl;
    std::cout << dodgy->getType() << " copy thinks \"" << dodgy->getBrain()->getIdeas(1) << "\"" << std::endl;
    std::cout << dodgy->getType() << " copy thinks \"" << dodgy->getBrain()->getIdeas(2) << "\"" << std::endl;
    std::cout << std::endl;

    if ((dodgy->getBrain()->getIdeas(0).compare(doggy->getBrain()->getIdeas(0)) == 0) &&
        (dodgy->getBrain()->getIdeas(1).compare(doggy->getBrain()->getIdeas(1)) == 0) &&
        (dodgy->getBrain()->getIdeas(2).compare(doggy->getBrain()->getIdeas(2)) == 0)) {
        std::cout << "Deepcopy OK with copy constructor" << std::endl;
        std::cout << std::endl;
    }    

    delete dodgy;

    std::cout << std::endl;
    std::cout << "// Checking Deepcopy with copy operator :" << std::endl;
    std::cout << std::endl;

    Dog*    dawg = new Dog;
    *dawg = *doggy;

    std::cout << std::endl;
    std::cout << dawg->getType() << " thinks \"" << dawg->getBrain()->getIdeas(0) << "\"" << std::endl;
    std::cout << dawg->getType() << " thinks \"" << dawg->getBrain()->getIdeas(1) << "\"" << std::endl;
    std::cout << dawg->getType() << " thinks \"" << dawg->getBrain()->getIdeas(2) << "\"" << std::endl;
    std::cout << std::endl;

    if ((dawg->getBrain()->getIdeas(0).compare(doggy->getBrain()->getIdeas(0)) == 0) &&
        (dawg->getBrain()->getIdeas(1).compare(doggy->getBrain()->getIdeas(1)) == 0) &&
        (dawg->getBrain()->getIdeas(2).compare(doggy->getBrain()->getIdeas(2)) == 0)) {
        std::cout << "Deepcopy OK with copy operator" << std::endl;
        std::cout << std::endl;
    }
    
    delete dawg;
    delete doggy;

    return (0);
}