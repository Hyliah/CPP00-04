/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:32:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/26 19:59:44 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n):_value(n){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f):_value(f){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other):_value(other._value){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->_value = other.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

// int Fixed::getRawBits(void) const{
//     std::cout << "getRawBits member function called" << std::endl;
//     return (this->_value);
// }

// void Fixed::setRawBits(int const raw){
//     this->_value = raw;
// }
