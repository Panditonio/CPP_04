/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:38:57 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 01:35:24 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                            ICHARACTER CLASS                                */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    protected:
        // private member attributes
        // private member functions
        // constructors
    public:
        // destructor
        virtual ~ICharacter( void ) {}
        // operators overload
        // getter, setter
        virtual std::string const &getName( void ) const = 0;
        // public member functions
        virtual void    equip( AMateria* m ) = 0;
        virtual void    unequip( int idx ) = 0;
        virtual void    use( int idx, ICharacter &target) = 0;
};

#endif