/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:38:22 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 19:26:30 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
    this->_type = "[WRONG ANIMAL]";
    std::cout << this->_type << " default constructor called !" << std::endl;
    return;
}

WrongAnimal::WrongAnimal( std::string type ) {
    this->_type = type;
    std::cout << "[WRONG ANIMAL]" << this->_type << " constructor called !" << std::endl;
    return;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {
    *this = src;
    std::cout << this->_type << " copy constructor called !" << std::endl;
    return;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const &src) {
    std::cout << this->_type << " copy operator called !" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "[WRONG ANIMAL CONTROL] says \"destructor called !\"" << std::endl;
    std::cout << "Your " << this->_type << " is dead !" << std::endl;
    return;
}

std::string WrongAnimal::getType( void ) const {
    return (this->_type);
}

void    WrongAnimal::makeSound( void ) const {
    std::cout << this->_type << " : <BIG FART> !" << std::endl;
    return;
}