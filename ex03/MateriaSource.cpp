/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:25:17 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 02:01:49 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
    // std::cout << "[MATERIA_SOURCE] Default constructor called ! ";
    for (int i = 0; i < iSIZE; i++)
        this->_mItems[i] = NULL;
    return;
}

MateriaSource::MateriaSource( MateriaSource const &src ) {
    // std::cout << "[MATERIA_SOURCE] Parametric constructor called ! ";
    // *this = src;
    for (int i = 0; i < iSIZE; i++) {
        if (src.getMateria(i) == NULL)
            this->_mItems[i] = NULL;
        else     
            this->_mItems[i] = src.getMateria(i)->clone();
    }
    return;
}

MateriaSource  &MateriaSource::operator=( MateriaSource const &src) {
    // std::cout << "[MATERIA_SOURCE] Copy operator called ! ";
    if (this != &src) {
        for (int i = 0; i < iSIZE; i++) {
            if (this->_mItems[i] != NULL)
                delete this->_mItems[i];
        }
        for (int i = 0; i < iSIZE; i++) {
            if (src.getMateria(i) == NULL)
                this->_mItems[i] = NULL;
            else     
                this->_mItems[i] = src.getMateria(i)->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource( void ) {
    // std::cout << "[MATERIA_SOURCE] destructor called !" << std::endl;
    for (int i = 0; i < iSIZE; i++)
        if (this->_mItems[i])
            delete this->_mItems[i];
    return;
}

AMateria   *MateriaSource::getMateria( int const idx ) const {
    if (idx < 0 || idx >= iSIZE) {
        // std::cout << "[ERROR] no materia can be found !" << std::endl;
        return (NULL);
    }
    else
        return (this->_mItems[idx]);
}

void    MateriaSource::learnMateria( AMateria* m ) {
    for (int i = 0; i < iSIZE; i++) {
        if (this->_mItems[i] == NULL) {
            this->_mItems[i] = m;
            // std::cout << "[MATERIA_SOURCE] " << this->_mItems[i]->getType();
            // std::cout << " learned" << std::endl;
            return;
        }
    }
    // std::cout << "[MATERIA_SOURCE] " << m->getType();
    // std::cout << " cannot be learned" << std::endl; 
}

AMateria*    MateriaSource::createMateria( std::string const &type ) {
    for (int i = 0; i < iSIZE; i++) {
        if (this->_mItems[i] != NULL && this->_mItems[i]->getType() == type)
            return (this->_mItems[i]->clone());
    }
    return (NULL);
}