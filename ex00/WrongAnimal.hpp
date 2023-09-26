/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:38:28 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/24 21:37:34 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                            WRONGANIMAL CLASS                               */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        WrongAnimal( WrongAnimal const &src );
        WrongAnimal& operator=( WrongAnimal const &src );
        virtual ~WrongAnimal( void );

        std::string     getType( void ) const;
        void    makeSound( void ) const;
};

#endif