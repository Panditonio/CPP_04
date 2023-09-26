/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:38:37 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 19:26:29 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("[WRONG CAT]") {
    std::cout << this->_type << " constructor called !" << std::endl;
    return;
}

WrongCat::~WrongCat( void ) {
    std::cout << this->_type << " destructor called !" << std::endl;
    return;
}

void    WrongCat::makeSound( void ) const {
    std::cout << this->_type << " : MEEOOOOW !" << std::endl;
    return;
}