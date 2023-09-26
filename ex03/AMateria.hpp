/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:16:54 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 02:10:21 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                              AMATERIA CLASS                                */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        // private member attributes
        std::string _type;
        // private member functions
    public:
        // constructors
        AMateria( void );
        AMateria( std::string const &type );
        AMateria( AMateria const &src );
        // destructor
        virtual ~AMateria( void );
        // operators overload
        AMateria&   operator=( AMateria const &src );
        // getter, setter
        std::string const   &getType( void ) const;
       // public member functions
        virtual AMateria*   clone( void ) const = 0;
        virtual void        use( ICharacter& target );
};

#endif
