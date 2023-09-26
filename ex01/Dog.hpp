/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:41:12 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 21:38:27 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                DOG CLASS                                   */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>

class Dog : public Animal
{
    private:
        // private member attributes
        Brain*  _brain;
        // private member functions
        void    makeSound( void ) const;
    public:
        // constructors
        Dog( void );
        Dog( std::string const type );
        Dog( Dog const &src);

        // destructor
        ~Dog( void );

        // operators overload
        Dog const   &operator=(Dog const &src);

        // getter, setter
        using   Animal::getType;
        Brain*  getBrain() const;

       // base class functions override
       // class public member functions
};

#endif