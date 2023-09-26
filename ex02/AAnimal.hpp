/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:40:37 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 21:32:52 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                              AANIMAL CLASS                                 */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{ 
    protected:
        // private member attributes
        std::string _type;
        // private member functions
        // constructors
        AAnimal( void );
        AAnimal( std::string const type );
        AAnimal( AAnimal const &src );
    public:
        // destructor
        virtual ~AAnimal( void );

        // operators overload
        AAnimal const    &operator=( AAnimal const &src );

        // getter, setter
        std::string     getType( void ) const;
        virtual Brain*  getBrain() const = 0;

       // public member functions
        virtual void    makeSound( void ) const = 0;
};

#endif