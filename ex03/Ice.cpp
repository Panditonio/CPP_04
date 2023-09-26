/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:17:19 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 02:01:51 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice") {
    // std::cout << this->_type << " default constructor called !" << std::endl;
    return;
}

Ice::Ice( Ice const &src ): AMateria(src) {
    // std::cout << this->_type << " copy constructor called !" << std::endl;
    // *this = src;
    return;
}

Ice&    Ice::operator=( Ice const &src ) {
    // std::cout << this->_type << " copy operator called !" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}
 
Ice::~Ice( void ) {
    return;
}

std::string const & Ice::getType( void ) const {
    return (this->_type);
}

Ice*    Ice::clone( void ) const {
    return (new Ice(*this));
}

void    Ice::use( ICharacter &target ) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}