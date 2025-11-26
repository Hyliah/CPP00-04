/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:32:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/27 00:13:57 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor

Fixed::Fixed():_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n):_value(n) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = toInt();
}

Fixed::Fixed(const float f):_value(f) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = toFloat();
}

Fixed::Fixed(const Fixed& other):_value(other._value) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other)
		this->_value = other._value;
	return *this;
}

// destructor

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

// casts

float	Fixed::toFloat( void ) const{
	return (float)_value / (1 << _bits);
}

int		Fixed::toInt( void ) const{
	int base_float = this->_value;
	return ((int)base_float);
}

// operator 

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return os;
}

