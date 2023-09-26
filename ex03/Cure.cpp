/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:17:13 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 02:01:52 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
 
Cure::Cure( void ): AMateria("cure") {
    // std::cout << this->_type << " default constructor called !" << std::endl;
    return;
}

Cure::Cure( Cure const &src ): AMateria(src) {
    // std::cout << this->_type << " copy constructor called !" << std::endl;
    // *this = src;
    return;
}

Cure&   Cure::operator=( Cure const &src ) {
    // std::cout << this->_type << " copy operator called !" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}

Cure::~Cure( void ) {
    return;
}

std::string const   &Cure::getType( void ) const {
    return (this->_type);
}

Cure*   Cure::clone( void ) const {
    return (new Cure(*this));
}

void        Cure::use( ICharacter &target ) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return;
}