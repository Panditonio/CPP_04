/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:36:21 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 03:05:24 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "[BRAIN] constructor called !" << std::endl;
    return;
}

Brain::~Brain( void ) {
    std::cout << "[BRAIN] destructor called !" << std::endl;
    return;
}

Brain::Brain( Brain const &src ) {
    std::cout << "[BRAIN] copy constructor called !" << std::endl;
    *this = src;
    return;
}

Brain&  Brain::operator=( Brain const &src ) {
    std::cout << "[BRAIN] copy operator called." << std::endl;
    if ( this != &src ) {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = src._ideas[i];
    }
    return (*this);
}

std::string const    Brain::getIdeas( int const &i ) const {
    if (i >= 0 && i < MAX_IDEAS)
        return (this->_ideas[i]);
    else {
        std::cout << "Request denied : LIMITED [BRAIN] CAPACITY = 100" << std::endl;
        exit(1);
    }
}

void    Brain::setIdeas( std::string const &id, int const &i ) {
    if (i >= 0 && i < MAX_IDEAS)
        this->_ideas[i] = id;
    else
        this->_ideas[0] = "[BRAIN FREEZE]";
}