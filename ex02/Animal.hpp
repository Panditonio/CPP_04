/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:40:37 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 21:32:54 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                              ANIMAL CLASS                                  */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

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
        Animal const    &operator=( Animal const &src );

        // getter, setter
        std::string     getType( void ) const;
        virtual Brain*  getBrain() const = 0;

       // public member functions
        virtual void    makeSound( void ) const;
};

#endif