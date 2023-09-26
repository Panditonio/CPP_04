/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:40:49 by aherbet           #+#    #+#             */
/*   Updated: 2023/09/08 18:17:43 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
    this->_type = "[CAT]";
    std::cout << this->_type << " default constructor called !" << std::endl;
    try {
        this->_brain = new Brain;
        std::cout << this->_type << " has a brain…" << std::endl;
    } catch (std::bad_alloc const &e) {
        std::cout << "MemAlloc failed : " << e.what() << std::endl;
    }
    return;
}

Cat::Cat( std::string const type ): Animal(type) {
    // try {
    //     this->_brain = new Brain;
    // } catch (std::bad_alloc const &e) {
    //     std::cout << "MemAlloc failed : " << e.what() << std::endl;
    // }
    std::cout << this->_type << " parametric constructor called !" << std::endl;
    return;
}

Cat::Cat( Cat const &src ): Animal(src) {
    // *this = src;
    this->_brain = new Brain(*src._brain);
    std::cout << this->_type << " copy constructor called !" << std::endl;
    return;
}

Cat::~Cat( void ) {
    delete this->_brain;
    std::cout << this->_type << " has no more brain…" << std::endl;
    std::cout << this->_type << " destructor called !" << std::endl;
    return;
}

Cat& Cat::operator=( Cat const &src ) {
    std::cout << this->_type << " copy operator called !" << std::endl;
    if (this != &src) {
        Animal::operator=(src);
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

void    Cat::makeSound( void ) const {
    std::cout << this->_type << " : MEEOOOOW !" << std::endl;
    return;
}

Brain*  Cat::getBrain() const {
    return (this->_brain);
}