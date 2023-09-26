/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:40:58 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 21:32:56 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                CAT CLASS                                   */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <iostream>

class Cat : public AAnimal
{
    private:
        // private member attributes
        Brain*  _brain;
        // private member functions
        void    makeSound( void ) const;
    public:
        // constructors
        Cat( void );
        Cat( std::string const type );
        Cat( Cat const &src);

        // destructor
        ~Cat( void );

        // operators overload
        Cat&    operator=(Cat const &src);

        // getter, setter
        using   AAnimal::getType;
        Brain*  getBrain() const;

       // base class functions override
       // public member functions
};

#endif