/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:25:02 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 01:34:30 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           IMATERIASOURCE CLASS                             */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
    protected:
        // private member attributes
        // private member functions
        // constructors
    public:
        // destructor
        virtual ~IMateriaSource( void ) {}
        // operators overload
        // getter, setter
        // public member functions
        virtual void        learnMateria( AMateria* m ) = 0;
        virtual AMateria*   createMateria( std::string const &type ) = 0;
};

#endif