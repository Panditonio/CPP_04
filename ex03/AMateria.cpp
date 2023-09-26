/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:16:45 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 02:09:40 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ): _type("[none]") {
    // std::cout << "[AMATERIA] default constructor called !" << std::endl;
    return;
}

AMateria::AMateria( std::string const &type ): _type(type) {
    // std::cout << "[AMATERIA] parametric constructor called !" << std::endl;
    return;
}

AMateria::AMateria( AMateria const &src ): _type(src.getType()) {
    // std::cout << "[AMATERIA] copy constructor called !" << std::endl;
    // *this = src;
    return;
}

AMateria    &AMateria::operator=( AMateria const &src) {
    // std::cout << "[AMATERIA] copy operator called !" << std::endl;
    if (this != &src)
       this->_type = src.getType();
    return (*this);
}

AMateria::~AMateria( void ) {
    // std::cout << "[AMATERIA] destructor called !" << std::endl;
    return;  
}

std::string const & AMateria::getType( void ) const {
    return (this->_type);
}

void     AMateria::use( ICharacter& target) {
    std::cout << "[AMATERIA] useless against " << target.getName() << std::endl;
    return;
}