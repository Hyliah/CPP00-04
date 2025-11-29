/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:51:20 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 03:36:31 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) { 
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    //std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    //std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    //std::cout << Fixed::max( a, b ) << std::endl;
return 0; }