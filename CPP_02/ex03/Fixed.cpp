/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:32:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 21:51:10 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor

/**
 * @brief Default constructor for @class Fixed, initilizing the integer _raw at 0.
 */

Fixed::Fixed():_raw(0) {

}

/**
 * @brief Parametric constructor for @class Fixed using an integer as input.
 *
 * @details Converts the integer into fixed-point format by shifting it to the
 * left by @_bits (i.e., multiplying by 2^_bits). The shifted value is then
 * stored directly in the internal variable @_raw.
 *
 * @param n The integer value to convert into fixed-point representation.
 */

Fixed::Fixed(const int n):_raw(n) {
	this->_raw = n << _bits;
}

/**
 * @brief Creates a fixed-point number from a floating-point value.
 *
 * @details Converts a floating-point value into a fixed-point representation.
 * The float is multiplied by 2^_bits (i.e., shifted to the left) and rounded
 * before being stored in the internal integer variable @_raw.
 * 
 * Example:
 *    f = 5.5  →  5.5 * 256 = 1408  → stored as integer 1408.
 *
 * @param f The floating-point number to convert.
 */

Fixed::Fixed(const float f):_raw(f) {
	this->_raw = (roundf(f * (1 << _bits)));
}

/**
 * @brief Copy Constructor (new Fixed:: Fixed object)
 * @param other 
 */

Fixed::Fixed(const Fixed& other):_raw(other._raw) {
}

/**
 * @brief Assignement Operator of @class Fixed
 * @param other 
 * @return Fixed& 
 */

Fixed& Fixed::operator=(const Fixed& other){
	if(this != &other)
		this->_raw = other._raw;
	return *this;
}

/**
 * @brief Destroy the Fixed:: Fixed object
 */
Fixed::~Fixed(){
}

/**
 * @brief Converts the fixed-point value to float.
 * @return The value as a float.
 */

float	Fixed::toFloat( void ) const{
	return ((float)_raw / (1 << _bits));
}

/**
 * @brief Returns the fixed-point value as an integer.
 * @return The value truncated to its integer part.
 */

int		Fixed::toInt( void ) const{
	return (_raw >> _bits);
}

// operator 

/**
 * @brief Outputs the Fixed value as a float to the given stream.
 *
 * @param os  The output stream to write into.
 * @param obj The Fixed object to display.
 * @return The output stream, for chaining.
 */

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return os;
}
