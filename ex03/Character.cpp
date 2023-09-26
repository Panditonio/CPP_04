/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:34:55 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 02:16:04 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ): _name("[noname]") {
    // std::cout << "[CHARACTER] default constructor called ! ";
    for (int i = 0; i < iSIZE; i++)
        this->_cItems[i] = NULL;
    return;
}

Character::Character( std::string const &name ): _name(name) {
    // std::cout << "[CHARACTER] parametric constructor called ! ";
    // std::cout << this->_name << " created" << std::endl;
    for (int i = 0; i < iSIZE; i++)
        this->_cItems[i] = NULL;
    return;
}

Character::Character( Character const &src ): _name(src.getName()) {
    // std::cout << "[CHARACTER] copy constructor called ! ";
    // std::cout << src.getName() << " copied" << std::endl;
    // *this = src;
    for (int i = 0; i < iSIZE; i++) {
        if (src.getItem(i) == NULL)
            this->_cItems[i] = NULL;
        else     
            this->_cItems[i] = src.getItem(i)->clone();
    }
    return;
}

Character  &Character::operator=( Character const &src) {
    // std::cout << "[CHARACTER] copy assignment operator called ! ";
    // std::cout << src.getName() << " copied" << std::endl;
    if (this != &src) {
        for (int i = 0; i < iSIZE; i++) {
            if (this->_cItems[i] != NULL)
                delete this->_cItems[i];
        }
        this->_name = src.getName();
        for (int i = 0; i < iSIZE; i++) {
            if (src.getItem(i) == NULL)
                this->_cItems[i] = NULL;
            else     
                this->_cItems[i] = src.getItem(i)->clone();
        }
    }
    return (*this);
}

Character::~Character( void ) {
    // std::cout << "[CHARACTER] destructor called !" << std::endl;
    // std::cout << this->_name << " is dead !" << std::endl;
    for (int i = 0; i < iSIZE; i++)
        if (this->_cItems[i])
            delete this->_cItems[i];
    return;
}

std::string const   &Character::getName( void ) const {
    return (this->_name);
}

AMateria const    *Character::getItem( int const idx ) const {
    if (idx < 0 || idx >= iSIZE) {
        // std::cout << "[ERROR] no items can be found !" << std::endl;
        return (NULL);
    }
    else
        return (this->_cItems[idx]);
}

void    Character::equip( AMateria* m ) {
    for (int i = 0; i < iSIZE; i++) {
        if (this->_cItems[i] == NULL) {
            this->_cItems[i] = m;
            // std::cout << this->_name << " equiped with ";
            // std::cout << m->getType() << std::endl;
            return;
        }
    }
    // std::cout << this->_name << " can't equip with ";
    // std::cout << m->getType() << std::endl;  
}

void    Character::unequip( int idx ) {
    if ((idx < 0 || idx >= iSIZE)) {
        // std::cout << "[ERROR] no items to unequip !" << std::endl;
        return;
    }
    else {
        // std::cout << this->_name << " unequiped ";
        // std::cout << this->_cItems[idx]->getType() << " successfully" << std::endl;
        this->_cItems[idx] = NULL;
    } 
}

void    Character::use( int idx, ICharacter& target) {
    if (idx < 0 || idx >= iSIZE || this->_cItems[idx] == NULL) {
        // std::cout << "[ERROR] no items to use !" << std::endl;
        return;
    }
    else {
        this->_cItems[idx]->use(target);
        // std::cout << this->_name << " used " << this->_cItems[idx]->getType();
        // std::cout << " on " << target.getName() << std::endl;
    }
}