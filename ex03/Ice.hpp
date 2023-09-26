/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:17:22 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/08 01:24:42 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                ICE CLASS                                  */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        // private member attributes
        // std::string _type;
        // private member functions
    public:
        // constructors
        Ice( void );
        Ice( Ice const &src );
        // destructor
        ~Ice( void );

        // operators overload
        Ice&    operator=( Ice const &src );

        // getter, setter
        std::string const   &getType( void ) const;

        // public member functions
        Ice*    clone( void ) const;
        void    use( ICharacter &target );
};

#endif

