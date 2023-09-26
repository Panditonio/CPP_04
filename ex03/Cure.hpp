/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:17:16 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 01:21:52 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                CURE CLASS                                  */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        // private member attributes
        // std::string _type;
        // private member functions
    public:
        // constructors
        Cure( void );
        Cure( Cure const &src );
        // destructor
        virtual ~Cure( void );

        // operators overload
        Cure&   operator=( Cure const &src );

        // getter, setter
        std::string const   &getType( void ) const;

        // public member functions
        Cure*   clone( void ) const;
        void    use( ICharacter &target );
};

#endif

