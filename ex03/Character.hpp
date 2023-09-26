/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 06:35:08 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 02:10:08 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                             CHARACTER CLASS                                */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define iSIZE 4

class Character : public ICharacter
{
    private:
        // private member attributes
        std::string     _name;
        AMateria        *_cItems[iSIZE];
        // private member functions
    public:
        // constructors
        Character( void );
        Character( std::string const &name );
        Character( Character const &src );
        // destructor
        virtual ~Character( void );
        // operators overload
        Character    &operator=( Character const &src );
        // getter, setter
        std::string const   &getName( void ) const;
        AMateria const      *getItem( int const idx ) const;
        // public member functions
        void    equip( AMateria* m );
        void    unequip( int idx );
        void    use( int idx, ICharacter& target);
};

#endif