/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:37:51 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 21:38:28 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                CAT CLASS                                   */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        // private member attributes
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
        using   Animal::getType;

       // base class functions override
       // public member functions
};

#endif