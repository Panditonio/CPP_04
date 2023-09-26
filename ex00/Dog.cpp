/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:37:15 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 19:26:31 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
    this->_type = "[DOG]";
    std::cout << this->_type << " default constructor called !" << std::endl;
    return;
}

Dog::Dog( std::string const type ): Animal(type) {
    std::cout << this->_type << " parametric constructor called !" << std::endl;
    return;
}

Dog::Dog( Dog const &src ): Animal(src) {
    *this = src;
    std::cout << this->_type << " copy constructor called !" << std::endl;
    return;
}

Dog::~Dog( void ) {
    std::cout << this->_type << " destructor called !" << std::endl;
    return;
}

Dog&    Dog::operator=(Dog const &src) {
    std::cout << this->_type << " copy operator called !" << std::endl;
    Animal::operator=(src);
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << this->_type << " : WAFF WAFF !" << std::endl;
    return;
}