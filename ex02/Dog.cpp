/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:41:06 by aherbet           #+#    #+#             */
/*   Updated: 2023/09/08 18:29:52 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
    this->_type = "[DOG]";
    std::cout << this->_type << " default constructor called !" << std::endl;
    try {
        this->_brain = new Brain();
        std::cout << this->_type << " has a brain…" << std::endl;
    } catch (std::bad_alloc const &e) {
        std::cout << "MemAlloc failed : " << e.what() << std::endl;
    }
    return;
}

Dog::Dog( std::string const type ): AAnimal(type) {
    // try {
    //     this->_brain = new Brain;
    // } catch (std::bad_alloc const &e) {
    //     std::cout << "MemAlloc failed : " << e.what() << std::endl;
    // }
    std::cout << this->_type << " parametric constructor called !" << std::endl;
    return;
}

Dog::Dog( Dog const &src ): AAnimal(src) {
    // *this = src;
    this->_brain = new Brain(*src._brain);
    std::cout << this->_type << " copy constructor called !" << std::endl;
    return;
}

Dog::~Dog( void ) {
    delete this->_brain;
    std::cout << this->_type << " has no more brain…" << std::endl;
    std::cout << this->_type << " destructor called !" << std::endl;
    return;
}

Dog const   &Dog::operator=( Dog const &src ) {
    std::cout << this->_type << " copy operator called !" << std::endl;
    if (this != &src) {
        AAnimal::operator=(src);
        delete this->_brain;
        this->_brain = new Brain( *src._brain );
        /*OR*/
        // try {
        //     this->_brain = new Brain( *src._brain );
        // } catch (std::bad_alloc const &e) {
        //     std::cout << "MemAlloc failed : " << e.what() << std::endl;
        // }
    }
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << this->_type << " : WAFF WAFF !" << std::endl;
    return;
}

Brain*  Dog::getBrain() const {
    return (this->_brain);
}