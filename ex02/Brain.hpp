/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:36:17 by aherbet           #+#    #+#             */
/*   Updated: 2023/08/09 16:00:10 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                               BRAIN CLASS                                  */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <stdlib.h>

#define MAX_IDEAS 100

class Brain
{
    private:
        // private member attributes
        std::string _ideas[MAX_IDEAS];
        // private member functions
    public:
        // constructors
        Brain( void );
        Brain( const Brain &src );
        // destructor
        ~Brain( void );
        // operators overload
        Brain&              operator=( const Brain &rhs );
        // getter, setter
        std::string const   getIdeas( int const &i ) const;
        void                setIdeas( std::string const &id, int const &i );
        // public member functions
};

#endif