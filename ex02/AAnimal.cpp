/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:40:29 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 03:05:10 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {
    this->_type = "[ANIMAL]";
    std::cout << this->_type << " default constructor called !" << std::endl;
    std::cout << "Your " << this->_type << " is alive !" << std::endl;
    return;
}

AAnimal::AAnimal( std::string type ) {
    this->_type = type;
    std::cout << "[ANIMAL]" << this->_type << " constructor called !" << std::endl;
    return;
}

AAnimal::AAnimal( AAnimal const &src ) {
    *this = src;
    std::cout << this->_type << " copy constructor called !" << std::endl;
    return;
}

AAnimal const &AAnimal::operator=( AAnimal const &src) {
    std::cout << this->_type << " copy operator called !" << std::endl;
    if (this != &src)
       this->_type = src.getType();
    return (*this);
}

AAnimal::~AAnimal( void ) {
    std::cout << "[ANIMAL CONTROL] says \"destructor called !\"" << std::endl;
    std::cout << "Your " << this->_type << " is dead !" << std::endl;
    return;
}

std::string AAnimal::getType( void ) const {
    return (this->_type);
}

// void    AAnimal::makeSound( void ) const {
//     std::cout << this->_type << " : <FART> !" << std::endl;
//     return;
// }