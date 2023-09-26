/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:36:54 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 19:26:32 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
    this->_type = "[CAT]";
    std::cout << this->_type << " default constructor called !" << std::endl;
    return;
}

Cat::Cat( std::string const type ): Animal(type) {
    std::cout << this->_type << " parametric constructor called !" << std::endl;
    return;
}

Cat::Cat( Cat const &src ): Animal(src) {
    *this = src;
    std::cout << this->_type << " copy constructor called !" << std::endl;
    return;
}

Cat::~Cat( void ) {
    std::cout << this->_type << " destructor called !" << std::endl;
    return;
}

Cat&    Cat::operator=(Cat const &src) {
    std::cout << this->_type << " copy operator called !" << std::endl;
    Animal::operator=(src);
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << this->_type << " : MEEOOOOW !" << std::endl;
    return;
}