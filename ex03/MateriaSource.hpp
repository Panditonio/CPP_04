/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:24:59 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 01:33:18 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           MATERIASOURCE CLASS                              */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define iSIZE 4

class MateriaSource : public IMateriaSource
{
    private:
        // private member attributes
        AMateria    *_mItems[iSIZE];
        // private member functions
    public:
        // constructors
        MateriaSource( void );
        MateriaSource( MateriaSource const &src );
        // destructor
        virtual ~MateriaSource( void );
        // operators overload
        MateriaSource&  operator=( MateriaSource const &src );
        // getter, setter
        AMateria        *getMateria( int const idx ) const;
        // public member functions
        void            learnMateria( AMateria* m );
        AMateria*       createMateria( std::string const &type );
};

#endif