/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:37:41 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 21:36:45 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                              ANIMAL CLASS                                  */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        // private member attributes
        std::string _type;
        // private member functions
    public:
        // constructors
        Animal( void );
        Animal( std::string const type );
        Animal( Animal const &src );

        // destructor
        virtual ~Animal( void );

        // operators overload
        Animal& operator=( Animal const &src );

        // getter, setter
        std::string     getType( void ) const;

       // public member functions
        virtual void    makeSound( void ) const;
};

#endif