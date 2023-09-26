/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:36:13 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 19:26:33 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
    this->_type = "[ANIMAL]";
    std::cout << this->_type << " default constructor called !" << std::endl;
    std::cout << "Your " << this->_type << " is alive !" << std::endl;
    return;
}

Animal::Animal( std::string const type ) {
    this->_type = type;
    std::cout << "[ANIMAL]" << this->_type << " constructor called !" << std::endl;
    return;
}

Animal::Animal( Animal const &src ) {
    *this = src;
    std::cout << this->_type << " copy constructor called !" << std::endl;
    return;
}

Animal& Animal::operator=( Animal const &src) {
    std::cout << this->_type << " copy operator called !" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}

Animal::~Animal( void ) {
    std::cout << "[ANIMAL CONTROL] says \"destructor called !\"" << std::endl;
    std::cout << "Your " << this->_type << " is dead !" << std::endl;
    return;
}

std::string Animal::getType( void ) const {
    return (this->_type);
}

void    Animal::makeSound( void ) const {
    std::cout << this->_type << " : <FART> !" << std::endl;
    return;
}